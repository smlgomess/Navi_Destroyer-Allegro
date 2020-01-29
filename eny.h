int ini=0;

void enmy(){ 

            ini+=1;  
            din2 *eny = (din2 *) malloc (sizeof(din2));
            eny->verificar = true;
            eny->paradamob = 1;
            eny->countmob = 2;            
           
            eny->i = NULL;
            eny->i = al_load_bitmap("Images/enemy.png");
            
            if(eny->i == NULL)
            {
                      al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem do inimigo", NULL, ALLEGRO_MESSAGEBOX_ERROR);
                      exit(0);
            }
            
            eny->life = 3;
            
            eny->verfandamento = rand()%3;            
            if(eny->verfandamento  == 0){
                 eny->x = -30 - al_get_bitmap_width(eny->i);
                 eny->y = rand()%hgs;                
                }
                
                else if (eny->verfandamento  == 1){
                  eny->x = wds + 30;
                  eny->y = rand()%hgs;  
                  }
                  
                else if (eny->verfandamento  == 2){
                  eny->x = rand()%wds;
                  eny->y = rand()%hgs;
                  
                   if(eny->y <= (wds/2)){
                                                                 
                   eny->y = - 30 - al_get_bitmap_height(eny->i); 
                   
                   }
                   else if(eny->y > (wds/2)){
                     
                   eny->y = hgs + 30;
                        
                   }
                   
                  }
    
            if(inicio_eny == NULL){          
            inicio_eny = eny;  
            fim_eny = eny;
            fim_eny->prox = NULL;
            }
            
            else{
            fim_eny->prox = eny;
            fim_eny = eny;
            fim_eny->prox = NULL;
            }
 
                  
}
