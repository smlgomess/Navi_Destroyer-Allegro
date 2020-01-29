short int parada = 1, paradaboss = 1;
int score=0, hp=7, min=0, seg=0;
bool ida = true;   
short int b = 255, g = 255;
short int fireand = 0;
bool podsenhar = false;
bool printboss = false;
bool okay =false;

void drawall(){
     
     al_clear_to_color(al_map_rgb(255,255,255));
            al_draw_bitmap(bm[1].i, bm[1].x,  bm[1].y, 0);
            
            if(parada == 1){
            al_draw_rotated_bitmap(bm[0].i, al_get_bitmap_width(bm[0].i)/2, al_get_bitmap_height(bm[0].i)/2,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2, bm[0].y + al_get_bitmap_width(bm[0].i)/2, grau ,0);
            
            if(podsenhar == true){
                 
            if(fireand == 1){
            al_draw_rotated_bitmap(bm[9].i, al_get_bitmap_width(bm[0].i)/2 + bm[9].x, al_get_bitmap_height(bm[0].i)/2 + bm[9].y,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2, bm[0].y + al_get_bitmap_width(bm[0].i)/2, grau ,0);
            
            al_draw_rotated_bitmap(bm[9].i, al_get_bitmap_width(bm[0].i)/2 + bm[9].x, al_get_bitmap_height(bm[0].i)/2 -57,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2, bm[0].y + al_get_bitmap_width(bm[0].i)/2, grau ,0);            
            }
            
            if(fireand == 2){
            al_draw_rotated_bitmap(bm[10].i, al_get_bitmap_width(bm[0].i)/2 + bm[10].x, al_get_bitmap_height(bm[0].i)/2 + bm[10].y,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2, bm[0].y + al_get_bitmap_width(bm[0].i)/2, grau ,0);
            
            al_draw_rotated_bitmap(bm[10].i, al_get_bitmap_width(bm[0].i)/2 + bm[10].x, al_get_bitmap_height(bm[0].i)/2 -57,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2, bm[0].y + al_get_bitmap_width(bm[0].i)/2, grau ,0);
            }
            
            if(fireand == 3){
            al_draw_rotated_bitmap(bm[11].i, al_get_bitmap_width(bm[0].i)/2 + bm[11].x, al_get_bitmap_height(bm[0].i)/2 + bm[11].y,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2, bm[0].y + al_get_bitmap_width(bm[0].i)/2, grau ,0);
            
            al_draw_rotated_bitmap(bm[11].i, al_get_bitmap_width(bm[0].i)/2 + bm[11].x, al_get_bitmap_height(bm[0].i)/2 -57,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2, bm[0].y + al_get_bitmap_width(bm[0].i)/2, grau ,0);
            }   
            }   
              
             }//limpa tela e desenha nave
              
            
           
            aux_shot = inicio_shot; 
                     
            for (int inicio = 1; inicio <= ti; inicio ++){
            
            if(aux_shot->verificar == true){
            if(aux_shot->desenhar == false){                          
                                               
            al_draw_rotated_bitmap(aux_shot->i, al_get_bitmap_width(bm[0].i)/2 + aux_shot->x, al_get_bitmap_height(bm[0].i)/2 + aux_shot->y,
            bm[0].x + al_get_bitmap_width(bm[0].i)/2 , bm[0].y + al_get_bitmap_width(bm[0].i)/2  , aux_shot->grau2 ,0); 

            aux_shot->desenhar = true;
                                      
            }
            
            if (aux_shot->desenhar == true){                                                       
             
            al_draw_rotated_bitmap(aux_shot->i, al_get_bitmap_width(bm[0].i)/2 + aux_shot->x, al_get_bitmap_height(bm[0].i)/2 + aux_shot->y,
            aux_shot->imgx+ al_get_bitmap_width(bm[0].i)/2 , aux_shot->imgy +al_get_bitmap_width(bm[0].i)/2  , aux_shot->grau2 ,0);                
                 
            }
            
            aux_shot = aux_shot->prox;
            }
           } 
                      
           //inimigos
           aux_eny = inicio_eny;
           
           while(aux_eny != NULL){
           
           if(aux_eny->paradamob != 0){
                                                                   
           al_draw_bitmap(aux_eny->i, aux_eny->x, aux_eny->y, 0);
                   
           }
          
            aux_eny = aux_eny->prox;
              
        }
        
           
        
        if (qu>0){            
       
         explode(qu, score, hp, min, seg, ida, b, g);
         
         aux_explo = inicio_explo;
         for(short int treta =0; treta< qu; treta ++){
         if (aux_explo->quant <= 0){      
         removeu = true;
         qu = qu - 1;
         remover(3);         
         }
      
         if(removeu == false){
         aux_explo = aux_explo->prox;         
         } 
    
         else if (inicio_explo != NULL){
         removeu = false;
             } 
             
         }  
            
         //printf("q %d\n", qu);
                 
         } 
    
         if(printboss){
            if(okay){
             al_draw_bitmap(aux_dangers->i, aux_dangers->x, aux_dangers->y, 0);                    
                }
           if(paradaboss == 1){
           al_draw_bitmap(bm[12].i, bm[12].x, bm[12].y, 0);
           }
           aux_boos_shot = inicio_boos_shot;
           
           for(short int bsho = 0; bsho < bti; bsho ++)
           {
              if(aux_boos_shot != NULL){   
              al_draw_bitmap(aux_boos_shot->i, aux_boos_shot->x, aux_boos_shot->y, 0);  
                     
               aux_boos_shot = aux_boos_shot->prox;      
               }
           }
           
            }
    
    
        al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
        if(hp == 1){
              
        if(g > 0 && b > 0 && ida == true){      
        g -=3;
        b -=3;        
        if(g == 0 && b == 0){
             ida = false;
             }        
        }
        
        if(g < 255 && b < 255 && ida == false){      
        g +=3;
        b +=3;
        if(g == 255 && b == 255){
             ida = true;
             }
        }   
    
        al_draw_textf(fonte, al_map_rgb(255,g,b), 250, 10, ALLEGRO_ALIGN_LEFT, "LIFE:  %d", hp);
        }
        else{
        al_draw_textf(fonte, al_map_rgb(255,255,255), 250, 10, ALLEGRO_ALIGN_LEFT, "LIFE:  %d", hp);     
             }
        al_draw_textf(fonte, al_map_rgb(255,255,255), 600, 10, ALLEGRO_ALIGN_LEFT, "%d min & %d seg", min, seg);   
    
    
    
    
        //if(qu == 0)        
        al_flip_display();
          
           
            
}
          
          
