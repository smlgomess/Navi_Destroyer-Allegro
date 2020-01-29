bool bsaida = true;
int bt, bti=0;


void boss_shoter (){ 

            bti+=1;  
            b_s *bshot = (b_s *) malloc (sizeof(b_s));            
            bshot->i = NULL;
            bshot->i = al_load_bitmap("Images/bosstiro.png");
                    if(bshot->i == NULL)
                    {
                    al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem do tiro del boss", NULL, ALLEGRO_MESSAGEBOX_ERROR);
                    exit(0);
                    }      
            bshot->x = bm[12].x + 72;
            bshot->y = bm[12].y + 208;  
                
            if(inicio_boos_shot == NULL){          
            inicio_boos_shot = bshot;  
            fim_boos_shot = bshot;
            fim_boos_shot->prox = NULL;
            }
            
            else{
            fim_boos_shot->prox = bshot;
            fim_boos_shot = bshot;
            fim_boos_shot->prox = NULL;
            }
            
            
            
            
            bti+=1;  
            bshot = (b_s *) malloc (sizeof(b_s));            
            bshot->i = NULL;
            bshot->i = al_load_bitmap("Images/bosstiro.png");
                    if(bshot->i == NULL)
                    {
                    al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem do tiro del boss", NULL, ALLEGRO_MESSAGEBOX_ERROR);
                    exit(0);
                    }      
            bshot->x = bm[12].x + 338;
            bshot->y = bm[12].y + 208; 
            bsaida = false;
            bt = clock();             
                
            if(inicio_boos_shot == NULL){          
            inicio_boos_shot = bshot;  
            fim_boos_shot = bshot;
            fim_boos_shot->prox = NULL;
            }
            
            else{
            fim_boos_shot->prox = bshot;
            fim_boos_shot = bshot;
            fim_boos_shot->prox = NULL;
            }
 
                
}                      
