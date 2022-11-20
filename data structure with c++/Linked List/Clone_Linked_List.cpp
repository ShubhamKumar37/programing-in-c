Node* C_Head=NULL;
        Node* C_Tail=NULL;
        Node* Temp=Head;
        
        while(Temp!=NULL)
        {
            Insert(C_Head,C_Tail,Temp->data);
            Temp=Temp->next;
        }
        
        Node* Curr1=Head;
        Node* Curr2=C_Head;
        
        while(Curr1!=NULL && Curr2!=NULL)
        {
            Node* Forward=Curr1->next;
            Curr1->next=Curr2;
            Curr1=Forward;
            
            Forward=Curr2->next;
            Curr2->next=Curr1;
            Curr2=Forward;
            
        }
        
        Curr1=Head;
        
        while(Curr1!=NULL)
        {
            if(Curr1->next!=NULL)
            {
                Curr1->next->arb=Curr1->arb ? Curr1->arb->next : Curr1->arb;
            }
            Curr1=Curr1->next->next;
        }
        
        Curr1=Head;
        Curr2=C_Head;
        
        while(Curr1!=NULL && Curr2!=NULL)
        {
            Curr1->next=Curr2->next;
            Curr1=Curr1->next;
            
            if(Curr1!=NULL)
            {
                Curr2->next=Curr1->next;
                Curr2=Curr2->next;
                
            }
            
        }
        
        return C_Head;