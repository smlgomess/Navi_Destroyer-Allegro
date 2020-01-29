bool saida = true;
int t, ti=0;
float grau=0;

void shoter (){ 

            ti+=1;  
            din *shot = (din *) malloc (sizeof(din));            
            shot->grau2 = grau;
            shot->desenhar = false;                  
            shot->verificar = true;
            shot->i = NULL;
            shot->i = al_load_bitmap("Images/tiro.png");
                    if(shot->i == NULL)
                    {
                    al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem do tiro", NULL, ALLEGRO_MESSAGEBOX_ERROR);
                    exit(0);
                    }      
            shot->x = -100;
            shot->y = -40;            
            shot->imgx = bm[0].x;
            shot->imgy = bm[0].y;            
            shot->xtrue = bm[0].x + (al_get_bitmap_width(bm[0].i)/2) - (al_get_bitmap_width(shot->i)/2);             
            shot->ytrue = bm[0].y + (al_get_bitmap_height(bm[0].i)/2) - (al_get_bitmap_height(shot->i)/2);                        
            shot->xcos = cos(shot->grau2 );
            shot->ysin = sin(shot->grau2 );  
            shot->verfandamento = 0;  
            saida = false;
            t = clock();             
                
            if(inicio_shot == NULL){          
            inicio_shot = shot;  
            fim_shot = shot;
            fim_shot->prox = NULL;
            }
            
            else{
            fim_shot->prox = shot;
            fim_shot = shot;
            fim_shot->prox = NULL;
            }
 
            //printf ("ti = %d\n", ti);            
}                      
