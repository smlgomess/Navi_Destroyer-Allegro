#include "loadim.h"
#include "loadfont.h"
#include "create.h"
#include "init.h"
#include "rules.h"
#include "menu.h"
#include "shot.h"
#include "bosshot.h"
#include "eny.h"
#include "remove.h"
#include "freall.h"
#include "explode.h"
#include "loadexplod.h"
#include "draw.h"
#include "boss.h"
#include "pause.h"
#include "resetall.h"
 
 
float FPS = 60;

 
main(){
     
     srand (time(NULL));
     
     inicio_shot = NULL;
     fim_shot = NULL;
    
     
     inicio_eny = NULL;
     fim_eny = NULL;


     init();
    
     
     ALLEGRO_MOUSE_STATE state;
     ALLEGRO_TRANSFORM transform;
     ALLEGRO_TIMER *timer = al_create_timer(1.0/FPS);
     ALLEGRO_TIMER *timer2 = al_create_timer(1.0/FPS);
     ALLEGRO_TIMER *enemy = al_create_timer(1.0/0.5);   
     ALLEGRO_TIMER *tempo = al_create_timer(1.0/1.0);
     ALLEGRO_TIMER *bossdng = al_create_timer(1.0/60.0);
     ALLEGRO_TIMER *flash = al_create_timer(1.0/10.0);
     
     al_register_event_source(eventos, al_get_timer_event_source(timer)); 
     al_register_event_source(eventos, al_get_timer_event_source(timer2));
     al_register_event_source(eventos, al_get_timer_event_source(enemy)); 
     al_register_event_source(eventos, al_get_timer_event_source(tempo));  
     al_register_event_source(eventos, al_get_timer_event_source(bossdng));  
     al_register_event_source(eventos, al_get_timer_event_source(flash)); 
     al_register_event_source(eventos, al_get_display_event_source(janela)); 
     al_register_event_source(eventos, al_get_keyboard_event_source()); 
     al_register_event_source(eventos, al_get_mouse_event_source());  
      
      
     menu();
     
      
     if(finalizar == false){
                  
     al_start_timer(timer);
     al_start_timer(timer2);
     al_start_timer(enemy);  
     al_start_timer(tempo); 
     al_start_timer(flash);
     
     al_clear_to_color(al_map_rgb(255,255,255));
     bm[1].x = (wds/2) - (al_get_bitmap_width(bm[1].i)/2) ;
     bm[1].y = (hgs/2) - (al_get_bitmap_height(bm[1].i)/2) ;
     vfx = bm[1].x;
     vfy = bm[1].y;
    
     al_draw_bitmap(bm[1].i, bm[1].x,  bm[1].y, 0);

     bm[0].y = (hgs/2) - (al_get_bitmap_height(bm[0].i)/2);
     bm[0].x = (wds/2) - (al_get_bitmap_width(bm[0].i)/2); 
     vfbmx = bm[0].x;
     vfbmy = bm[0].y;
         
     al_draw_bitmap(bm[0].i, bm[0].x,  bm[0].y, 0);
     
     bm[9].y = -25;
     bm[9].x = 50;    
     bm[10].y = -25;
     bm[10].x = 50;   
     bm[11].y = -25;
     bm[11].x = 50;   

     bm[12].x = wds/2 - (al_get_bitmap_width(bm[12].i)/2);
     bm[12].y = 0 - al_get_bitmap_height(bm[12].i);
     //-25 -57
 
     al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
     al_draw_textf(fonte, al_map_rgb(255,255,255), 250, 10, ALLEGRO_ALIGN_LEFT, "LIFE:  %d", hp);
     al_draw_textf(fonte, al_map_rgb(255,255,255), 600, 10, ALLEGRO_ALIGN_LEFT, "%d min & %d seg", min, seg);
        
     al_flip_display();
 
     }
     
     t = clock();
     while(clock() - t < 200)
     {
                   }
                   
      mx = bm[0].x + (al_get_bitmap_width(bm[0].i)/2);
      my = bm[0].y + (al_get_bitmap_height(bm[0].i)/2);               
                   
     while(!finalizar)
        {
                      
        ALLEGRO_EVENT evento;             
        al_get_keyboard_state(&kbdstate);
        al_get_mouse_state(&state);
        al_wait_for_event(eventos, &evento);       
        
        if(evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			finalizar = true;
		}
		
		

        if (evento.type == ALLEGRO_EVENT_MOUSE_AXES){
                
            mx = evento.mouse.x;
            my = evento.mouse.y;  
             
         }     
         
         
         if(evento.type == ALLEGRO_EVENT_KEY_DOWN && evento.keyboard.keycode == ALLEGRO_KEY_P){                        
                pause = true; 
                solta = false;                             
                pausegame();   
                              
         }
         
        

         
         if(evento.type == ALLEGRO_EVENT_TIMER)
         {   
          
           
           
           
           if(evento.timer.source == flash){
                                  
           //nave
         
          if(countador < 2){
                       
          if (parada == 1){
          parada = 0;
          }
          
          else{
          parada = 1;
          countador +=1;
          }
          
          }
          
          
          //boss
          
          if(countadorboss < 1){
                       
          if (paradaboss == 1){
          paradaboss = 0;
          }
          
          else{
          paradaboss = 1;
          countadorboss +=1;
          }
          
          }
          
          
          
          
          //mobs
          aux_eny = inicio_eny;
          for(short int il = 1; il <= ini; il ++){ 
                      
          if(aux_eny->countmob < 2 && aux_eny != NULL){
                       
          if (aux_eny->paradamob == 1){
          aux_eny->paradamob = 0;
          }
          
          else{
          aux_eny->paradamob = 1;
          aux_eny->countmob +=1;
          }
          
          }
          
          if(aux_eny != NULL){
          aux_eny = aux_eny->prox;
          }
          
          }
              
     
           }
           
           
           
           
            
            
           if(evento.timer.source == timer){
           
               
                grau = atan2(my - (bm[0].y+(al_get_bitmap_height(bm[0].i)/2)) , mx - (bm[0].x+(al_get_bitmap_width(bm[0].i)/2)));
                if(stop){
                if(bm[0].x + (al_get_bitmap_width(bm[0].i)/2) < wds/2)
                bm[0].x += 2;
                
                if(bm[0].x + (al_get_bitmap_width(bm[0].i)/2) > wds/2)
                bm[0].x -= 2;
               
                if(bm[0].y + al_get_bitmap_height(bm[0].i) < hgs)
                bm[0].y += 1;
                
                      
                }
                
                if(bm[12].y >= -50){
                if(bm[1].y <= -6){
                bm[1].y += 6;
                }

                else{
                bm[1].y = -al_get_bitmap_height(bm[1].i) + hgs;
                }
                }
                //nave andar
                
                
                
                
                
              
                if(evento.type = al_key_down(&kbdstate, ALLEGRO_KEY_A ) && stop == false){
                 
                if(bm[1].x < 0 && bm[0].x + (al_get_bitmap_width(bm[0].i)/2) == wds/2 && bossmove == false)
                {
                     bm[1].x += 2;      
                           
                }
                           
                else if (bm[0].x <= 0){               
                
                }
              
                else{
                     bm[0].x -= 7;
                    /* bm[9].x -= 7;
                     bm[10].x -= 7;
                     bm[11].x -= 7;   */                
                     
                     }     
               if(!bossmove){      
               if(firestep == true){
               if(fireand < 3)
               fireand ++;
               else
               fireand = 1;
            
               firetime = clock();
               firestep = false; 
               }
              
               else if(clock() - firetime >= 50)
               firestep = true;    
               }
                   
               aux_eny = inicio_eny;
               
               for(short int in = 1; in <= ini; in++){  
                          
                if(aux_eny->x >= bm[0].x && vfx != bm[1].x){                        
                aux_eny->x += 4; 
                }
                
                if(aux_eny->x <= bm[0].x && vfx != bm[1].x){                        
                aux_eny->x += 4; 
                }
                
                aux_eny = aux_eny->prox;
                }//for      
                     
                     
                aux_explo = inicio_explo;      
                     
                for(short int in = 1; in <= qu; in++){  
                  if(aux_explo!= NULL){  
                                   
                  if(aux_explo->x >= bm[0].x && vfx != bm[1].x){                        
                  aux_explo->x += 4; 
                  }
                
                  if(aux_explo->x <= bm[0].x && vfx != bm[1].x){                        
                  aux_explo->x += 4; 
                  }
                
                  aux_explo = aux_explo->prox;
                  }
                
                }//for 2       
                     
                     
                     
                     
                     
      
                }
                
                
                
                               
              else if(evento.type = al_key_down(&kbdstate, ALLEGRO_KEY_D) && stop == false){              
            
              if(bm[1].x + al_get_bitmap_width(bm[1].i) > wds && bm[0].x + (al_get_bitmap_width(bm[0].i)/2) == wds/2 && bossmove == false)
                {
                     bm[1].x -= 2;      
                           
                           }
            
            
              else if (bm[0].x >= (wds - al_get_bitmap_width(bm[0].i))){               
                
                }
                else{
                     bm[0].x += 7;
                    /*/ bm[9].x += 7;
                     bm[10].x += 7;
                     bm[11].x += 7;*/
                     }   
                     
              if(!bossmove){          
              if(firestep == true){
              if(fireand < 3)
              fireand ++;
              else
              fireand = 1;
            
              firetime = clock();
              firestep = false; 
              }
            
              else if(clock() - firetime >= 50)
              firestep = true;           
              }          
                       
            
              aux_eny = inicio_eny;
              
              for(short int in = 1; in <= ini; in++){  
                          
              if(aux_eny->x <= bm[0].x && vfx != bm[1].x){
              aux_eny->x -= 4; 
              }
              
              if(aux_eny->x >= bm[0].x && vfx != bm[1].x){                        
              aux_eny->x -= 4; 
              }
                
              aux_eny = aux_eny->prox;
              }//for 
              
              
              aux_explo = inicio_explo;    
                     
                for(short int in = 1; in <= qu; in++){  
                  if(aux_explo!= NULL){  
                                   
                  if(aux_explo->x <= bm[0].x && vfx != bm[1].x){                        
                  aux_explo->x -= 4; 
                  }
                
                  if(aux_explo->x >= bm[0].x && vfx != bm[1].x){                        
                  aux_explo->x -= 4; 
                  }
                
                  aux_explo = aux_explo->prox;
                  }
                
                }//for 2    
         
              }
            
            
            if(evento.type = al_key_down(&kbdstate, ALLEGRO_KEY_W  )&& stop == false && bossmove == false){
                           
            if(bm[1].y < -2 && bm[0].y + (al_get_bitmap_height(bm[0].i)/2) == (hgs/2))
                {
                     bm[1].y += 2;                     
                     
                     }
                           
            else if (bm[0].y >= 0){ 
                            
                           bm[0].y -= 7;
                         /*  bm[9].y -= 7;
                           bm[10].y -= 7;
                           bm[11].y -= 7;*/   
                            } 
                                                 
            else{
                  }                                
                    
                                   
 
            if(firestep == true){
            if(fireand < 3)
            fireand ++;
            else
            fireand = 1;
            
            firetime = clock();
            firestep = false; 
            }
            
            else if(clock() - firetime >= 50)
            firestep = true;    
                   
            
            aux_eny = inicio_eny;
              
            for(short int in = 1; in <= ini; in++){  
                          
            if(aux_eny->y >= bm[0].y && vfy != bm[1].y){
            aux_eny->y += 4;
            }
            
            if(aux_eny->y <= bm[0].y && vfy != bm[1].y){
            aux_eny->y += 4;
            }
                
            aux_eny = aux_eny->prox;
            }//for 
            
            aux_explo = inicio_explo;      
                     
                for(short int in = 1; in <= qu; in++){  
                  if(aux_explo!= NULL){  
                                   
                  if(aux_explo->y >= bm[0].y && vfy != bm[1].y){                        
                  aux_explo->y += 4; 
                  }
                
                  if(aux_explo->y <= bm[0].y && vfy != bm[1].y){                        
                  aux_explo->y += 4; 
                  }
                
                  aux_explo = aux_explo->prox;
                  }
                
                }//for 2                
            
            
            
            }
            
            
 
            else if(evento.type = al_key_down(&kbdstate, ALLEGRO_KEY_S ) && stop == false && bossmove == false){            
            
                           
            if(bm[1].y + al_get_bitmap_height(bm[1].i) > hgs + 2 && bm[0].y + (al_get_bitmap_height(bm[0].i)/2) == (hgs/2))
                {
                     bm[1].y -= 2;      
                           
                           }      
            
                           
            else if ((bm[0].y + al_get_bitmap_height(bm[0].i)) <= hgs){
                            
                           bm[0].y += 7;
                          /* bm[9].y += 7;
                           bm[10].y += 7;
                           bm[11].y += 7; */ 
                            } 
                            
                            else{
                                 
                                 }
                                 
                                 
            if(firestep == true){
            if(fireand < 3)
            fireand ++;
            else
            fireand = 1;
            
            firetime = clock();
            firestep = false; 
            }
            
            else if(clock() - firetime >= 50)
            firestep = true; 
                                 
                                 
            aux_eny = inicio_eny;
              
            for(short int in = 1; in <= ini; in++){  
                          
            if(aux_eny->y <= bm[0].y && vfy != bm[1].y){
            aux_eny->y -= 4; 
            }
            
            if(aux_eny->y >= bm[0].y && vfy != bm[1].y){
            aux_eny->y -= 4;
            }
            
            aux_eny = aux_eny->prox;
            }//for                     
         
            
             aux_explo = inicio_explo;   
                     
                for(short int in = 1; in <= qu; in++){  
                  if(aux_explo!= NULL){  
                                   
                  if(aux_explo->y <= bm[0].y && vfy != bm[1].y){                        
                  aux_explo->y -= 4; 
                  }
                
                  if(aux_explo->y >= bm[0].y && vfy != bm[1].y){                        
                  aux_explo->y -= 4; 
                  }
                
                  aux_explo = aux_explo->prox;
                  }
                
                }//for 2     
                                                  
    
            }
            
             
             
             
             
             
             
                 //objetos andantes
             
             
               
             aux_shot = inicio_shot;
             for (short int tr = 1; tr <= ti; tr ++){
                 if(aux_shot != NULL){
                 if (aux_shot->verificar == true){
                                           
                                  
                 aux_shot->x  -=  10;                      

               
               if(aux_shot->verfandamento == 0){
               aux_shot->xtrue = aux_shot->xtrue + (aux_shot->xcos *79);
               aux_shot->ytrue = aux_shot->ytrue + (aux_shot->ysin *79);   
               aux_shot->verfandamento =1;
               }
               
               else if (aux_shot->verfandamento == 1){
               aux_shot->xtrue = aux_shot->xtrue + (aux_shot->xcos *10);
               aux_shot->ytrue = aux_shot->ytrue + (aux_shot->ysin *10); 
               }  
               
               }
               aux_shot = aux_shot->prox;
               }
               }
            
            
            
            
            
            
            
            
            
            aux_eny = inicio_eny;
            for (short int mob = 1; mob <= ini; mob ++){
                
            if (aux_eny->verificar == true){
            if(aux_eny->x == bm[0].x && aux_eny->y == bm[0].y){            
            
            }                                
                                            
            else if(aux_eny->x > bm[0].x && aux_eny->y < bm[0].y){            
            aux_eny->x -= velocidade;
            aux_eny->y += velocidade;
            }
            
            else if(aux_eny->x < bm[0].x && aux_eny->y < bm[0].y){            
            aux_eny->x += velocidade;
            aux_eny->y += velocidade;
            }
            
            else if(aux_eny->x < bm[0].x && aux_eny->y > bm[0].y){            
            aux_eny->x += velocidade;
            aux_eny->y -= velocidade;
            }
            
            else if(aux_eny->x > bm[0].x && aux_eny->y > bm[0].y){            
            aux_eny->x -= velocidade;
            aux_eny->y -= velocidade;
            }
            
            
            else if(aux_eny->x > bm[0].x && aux_eny->y == bm[0].y){            
            aux_eny->x -= velocidade;
            
            }
            
            else if(aux_eny->x < bm[0].x && aux_eny->y == bm[0].y){            
            aux_eny->x += velocidade;
            
            }            
            
            else if(aux_eny->x == bm[0].x && aux_eny->y > bm[0].y){            
            
            aux_eny->y -= velocidade;
            }
            
            else if(aux_eny->x == bm[0].x && aux_eny->y < bm[0].y){            
           
            aux_eny->y += velocidade;
            }
            
            aux_eny = aux_eny->prox;
            
            }
            }
      
            
            
            
            
            
            
            aux_boos_shot = inicio_boos_shot;
            
            
            for (short int seilakra = 0; seilakra < bti; seilakra ++){
            
            if(aux_boos_shot != NULL){
                             
            aux_boos_shot->y += velocidade_tiro_boss;            
            
            aux_boos_shot = aux_boos_shot->prox;
            }
            
            
            }
            
            
            
      
            
            
            
            }//timer
            
            
            
            
            
            
            
            
            
            //tiros
            if(evento.timer.source == timer2){

            if(state.buttons & 1 && stop == false){
                             
             if(saida == true){ 
              shoter();
                       }
              }
              
              if (clock() - t >= 200){
                        saida = true;
              }
              
              
            
            
            if(bossmove && bm[12].y >= -50){
              
              if(bsaida == true)  {            
              boss_shoter();  
              } 
              
              if (clock() - bt >= tempo_tiro_boss){
              bsaida = true;
              }           
              
              
              }  
              
              
              
            }
            
            
            
            
            
            
           //enmy();
            
            if(evento.timer.source == enemy){
                                   
             if(ini < limiteny){
             
             if(score < 1000) {              
       
              enmy();
              
              if(scorepass >= 400){
              enmy();              
              }
              
              if(scorepass >= 850){
              
              }
              
              }
              
              }
                  
                                   
        }
        

        
        if(evento.timer.source == tempo)
        {
                  seg +=1;             
                  if (seg == 60){
                          seg = 0;
                          min ++;
                          }             
                  
                  al_draw_textf(fonte, al_map_rgb(255,255,255), 600, 10, ALLEGRO_ALIGN_LEFT, "%d min & %d seg", min, seg);                       
                               
                               }
               
			desenhar = true;
          
          
            
        }  
        
        
        
         if(evento.timer.source == bossdng){  
                                                                
          invoque_boss(qu, score, hp, min, seg, ida, b, g);   
                           
                                    
        }
        
        
     if(desenhar && al_is_event_queue_empty(eventos))
        {
            desenhar = false;            
            
            drawall();
            
        }
        
        

        
        
        
        
        
        
        
        //sair da tela 
        
        
        
        aux_shot = inicio_shot;          
        for (int inicio = 1; inicio <= ti; inicio ++){             
             if(aux_shot != NULL){ 
                           
               if (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i) <= 0 
               || aux_shot->xtrue + al_get_bitmap_width(aux_shot->i) <= 0 
               || aux_shot->xtrue  >= wds 
               || aux_shot->ytrue >= hgs  )
              {
                 if(aux_shot->verificar == true)
                 {
                    
                  remover (1); 
                  
                  anterior_shot = aux_shot;
                  
                //  printf ("ti = %d\n", ti);
                  
                 }
                }
              }
            
            }
            
            
            
            aux_boos_shot = inicio_boos_shot;
            for (int inicio_shot_boss = 0; inicio_shot_boss < bti; inicio_shot_boss ++){             
             if(aux_boos_shot != NULL){ 
                 if (aux_boos_shot->y > hgs)
              {             
                   remover (4);
                   
                   
                   anterior_boos_shot = aux_boos_shot;   
              }       
             }
            }
 
     
     
     //colisao
    
        aux_eny = inicio_eny;
    
        for (int inicio = 1; inicio <= ini; inicio ++)
       {  
          
                        
       if (aux_eny->y + al_get_bitmap_height(aux_eny->i) >= bm[0].y && 
       aux_eny->y  + al_get_bitmap_height(aux_eny->i) <= (bm[0].y + al_get_bitmap_height(bm[0].i)) && 
       aux_eny->x >= bm[0].x &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (bm[0].x + al_get_bitmap_width(bm[0].i))
       || (aux_eny->x + al_get_bitmap_width(aux_eny->i)) >= bm[0].x &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (bm[0].x + al_get_bitmap_width(bm[0].i)) &&
       aux_eny->y  >= bm[0].y && (aux_eny->y  + al_get_bitmap_height(aux_eny->i)) <=
       (bm[0].y + al_get_bitmap_width(bm[0].i))
       || aux_eny->y  <= (bm[0].y + al_get_bitmap_height(bm[0].i)) &&
       aux_eny->y  >= bm[0].y &&
       aux_eny->x >= bm[0].x &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (bm[0].x + al_get_bitmap_width(bm[0].i))
       || aux_eny->x <= (bm[0].x + al_get_bitmap_width(bm[0].i)) && 
       aux_eny->x >= bm[0].x  &&
       aux_eny->y  >= bm[0].y && (aux_eny->y  + al_get_bitmap_height(aux_eny->i)) <=
       (bm[0].y + al_get_bitmap_width(bm[0].i)))  
       
       {  
                 
           hp -= 1;
           if(score >=10){
           score -= 10;
           }
          // loadexpld ();
                              
           if(aux_eny->verificar == true)
           {
             remover (2);
             remov = true;              
           }
          // parada = 0;          
           countador = 0;     
           al_draw_textf(fonte, al_map_rgb(255,255,255), 250, 10, ALLEGRO_ALIGN_LEFT, "LIFE:  %d", hp);
           al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
           
       }      
                   
                   
                        
       else if ( aux_eny->y  + al_get_bitmap_height(aux_eny->i) >= bm[0].y && 
       aux_eny->y  + al_get_bitmap_height(aux_eny->i) <= (bm[0].y + al_get_bitmap_height(bm[0].i)) && 
       aux_eny->x < bm[0].x &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) >= bm[0].x 
       || (aux_eny->x + al_get_bitmap_width(aux_eny->i)) >= bm[0].x &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (bm[0].x + al_get_bitmap_width(bm[0].i)) &&
       aux_eny->y  < (bm[0].y + al_get_bitmap_width(bm[0].i)) && 
       (aux_eny->y  + al_get_bitmap_height(aux_eny->i)) >= (bm[0].y + al_get_bitmap_width(bm[0].i))
       || aux_eny->y  <= (bm[0].y + al_get_bitmap_height(bm[0].i)) &&
       aux_eny->y  >= bm[0].y &&
       aux_eny->x  <= (bm[0].x + al_get_bitmap_width(bm[0].i)) &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) > (bm[0].x + al_get_bitmap_width(bm[0].i))
       || aux_eny->x <= (bm[0].x + al_get_bitmap_width(bm[0].i)) && 
       aux_eny->x >= bm[0].x  &&
       aux_eny->y  < bm[0].y && (aux_eny->y  + al_get_bitmap_height(aux_eny->i)) >=
       bm[0].y ) 
       
       {
        
           hp -= 1;
           if(score >=10){
           score -= 10;
           }
          // loadexpld ();
                                        
           if(aux_eny->verificar == true)
           {
             remover (2); 
             remov = true;         
           }
           //parada = 0;          
           countador = 0; 
           al_draw_textf(fonte, al_map_rgb(255,255,255), 250, 10, ALLEGRO_ALIGN_LEFT, "LIFE:  %d", hp);
           al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
        }   
        
        
       else if( aux_eny->y  + al_get_bitmap_height(aux_eny->i) >= bm[0].y && 
       aux_eny->y  + al_get_bitmap_height(aux_eny->i) <= (bm[0].y + al_get_bitmap_height(bm[0].i)) && 
       aux_eny->x <= (bm[0].x + al_get_bitmap_width(bm[0].i)) &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) > (bm[0].x + al_get_bitmap_width(bm[0].i)) 
       || (aux_eny->x + al_get_bitmap_width(aux_eny->i)) >= bm[0].x &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (bm[0].x + al_get_bitmap_width(bm[0].i)) &&
       aux_eny->y  <= bm[0].y && 
       (aux_eny->y  + al_get_bitmap_height(aux_eny->i)) > (bm[0].y + al_get_bitmap_width(bm[0].i))
       || aux_eny->y  <= (bm[0].y + al_get_bitmap_height(bm[0].i)) &&
       aux_eny->y  >= bm[0].y &&
       aux_eny->x <= bm[0].x &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) > bm[0].x 
       || aux_eny->x <= (bm[0].x + al_get_bitmap_width(bm[0].i)) && 
       aux_eny->x >= bm[0].x  &&
       aux_eny->y <= (bm[0].y + al_get_bitmap_width(bm[0].i)) && 
       (aux_eny->y  + al_get_bitmap_height(aux_eny->i)) > (bm[0].y + al_get_bitmap_width(bm[0].i)))
 
        
        {
        
           hp -= 1;
           if(score >=10){
           score -= 10;
           }
           //loadexpld (); 
                                       
           if(aux_eny->verificar == true)
           {
             remover (2);   
             remov = true;     
           }
           //parada = 0;
           
           countador = 0;    
           al_draw_textf(fonte, al_map_rgb(255,255,255), 250, 10, ALLEGRO_ALIGN_LEFT, "LIFE:  %d", hp);
           al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
        } 
        
        
        anterior_eny = aux_eny;
        if(remov == false){
        aux_eny = aux_eny->prox;
        }
        else{
        remov = false;
        }
        
        }//for
    
    
  
 
     
     
     //colisao de tiros


      
       aux_shot = inicio_shot;
       short int test = ti;
       for (int inicio = 1; inicio <= ti; inicio ++){
       vcolisao = false;    
       aux_eny = inicio_eny;    
       for(int k=1; k<=ini; k++){
       
                                      
       if ( aux_eny->y + al_get_bitmap_height(aux_eny->i) > aux_shot->ytrue && 
       aux_eny->y + al_get_bitmap_height(aux_eny->i) <= (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)) && 
       aux_eny->x <= aux_shot->xtrue &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) >= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i))
       || (aux_eny->x + al_get_bitmap_width(aux_eny->i)) > aux_shot->xtrue &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) &&
       aux_eny->y <= aux_shot->ytrue && (aux_eny->y + al_get_bitmap_height(aux_eny->i)) >=
       (aux_shot->ytrue + al_get_bitmap_width(aux_shot->i))
       || aux_eny->y < (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)) &&
       aux_eny->y >= aux_shot->ytrue &&
       aux_eny->x >= aux_shot->xtrue &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i))
       || aux_eny->x < (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) && 
       aux_eny->x >= aux_shot->xtrue  &&
       aux_eny->y <= aux_shot->ytrue && (aux_eny->y + al_get_bitmap_height(aux_eny->i)) >=
       (aux_shot->ytrue + al_get_bitmap_width(aux_shot->i)))  
       
       {  
                 
                 aux_eny->life -=1; 
                 //printf ("%d\n", aux_eny->life);
                 score +=2;
                 
                 remover (1);
                 vcolisao = true ;
                
                 aux_eny->countmob = 0;
                
                // aux_eny->pqp = false;                   
                 if(aux_eny->life == 0){                                    
                  
                 score += 5;
                                  
                 loadexpld ();
                                      
                 if(aux_eny->verificar == true)
                 {
                   remover (2);
                   system("cls");   
                 }
       
                                  
                 }  
                 al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
                 
                 
                
       }
                   
                        
       else if ( aux_eny->y + al_get_bitmap_height(aux_eny->i) > aux_shot->ytrue && 
       aux_eny->y + al_get_bitmap_height(aux_eny->i) <= (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)) && 
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) >= aux_shot->xtrue &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i))
       || (aux_eny->x + al_get_bitmap_width(aux_eny->i)) > aux_shot->xtrue &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) &&
       aux_eny->y <= (aux_shot->ytrue + al_get_bitmap_width(aux_shot->i)) && 
       aux_eny->y >= aux_shot->ytrue 
       || aux_eny->y < (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)) &&
       aux_eny->y >= aux_shot->ytrue &&
       aux_eny->x  <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) &&
       aux_eny->x > aux_shot->xtrue 
       || aux_eny->x < (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) && 
       aux_eny->x >= aux_shot->xtrue  &&
       aux_eny->y + al_get_bitmap_height(aux_eny->i) >  aux_shot->ytrue &&
       aux_eny->y + al_get_bitmap_height(aux_eny->i) <= (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)))
       
       {
        
                     
                 aux_eny->life -=1; 
                 //printf ("%d\n", aux_eny->life); 
                 score +=2;
                
                 remover (1);
                 vcolisao = true; 
                 
                 aux_eny->countmob = 0;
               
                // aux_eny->pqp = false;                      
                 if(aux_eny->life == 0){  
                  
                 score += 5;
                                  
                 loadexpld ();
                                      
                 if(aux_eny->verificar == true)
                 {
                   remover (2); 
                   system("cls");
                 }
              
                                 
                 }
                al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);  
                   
       }
                   
        
        
       else if ( aux_eny->y + al_get_bitmap_height(aux_eny->i) > aux_shot->ytrue && 
       aux_eny->y + al_get_bitmap_height(aux_eny->i) <= (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)) && 
       aux_eny->x  >= aux_shot->xtrue &&
       aux_eny->x  <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i))
       || (aux_eny->x + al_get_bitmap_width(aux_eny->i)) > aux_shot->xtrue &&
       (aux_eny->x + al_get_bitmap_width(aux_eny->i)) <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) &&
       aux_eny->y + al_get_bitmap_height(aux_eny->i) <= (aux_shot->ytrue + al_get_bitmap_width(aux_shot->i)) && 
       aux_eny->y + al_get_bitmap_height(aux_eny->i) >= aux_shot->ytrue 
       || aux_eny->y < (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)) &&
       aux_eny->y >= aux_shot->ytrue &&
       aux_eny->x + al_get_bitmap_width(aux_eny->i)  <= (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) &&
       aux_eny->x + al_get_bitmap_width(aux_eny->i) > aux_shot->xtrue 
       || aux_eny->x < (aux_shot->xtrue + al_get_bitmap_width(aux_shot->i)) && 
       aux_eny->x >= aux_shot->xtrue  &&
       aux_eny->y >  aux_shot->ytrue &&
       aux_eny->y  <= (aux_shot->ytrue + al_get_bitmap_height(aux_shot->i)))
       
       {
        
                                      
                 aux_eny->life -=1; 
                 //printf ("%d\n", aux_eny->life);
                 score +=2; 
                 
                 remover (1);
                 vcolisao = true ;
                 
                 aux_eny->countmob = 0;
               
                // aux_eny->pqp = false;                   
                 if(aux_eny->life == 0){  
                 
                
                 score += 5;               
                
                 loadexpld ();
                                                    
                 if(aux_eny->verificar == true)
                 {
                   remover (2); 
                   system("cls");
                 }
    
                 
                 }
                  al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
              
       }
        
        if(vcolisao == true)
        {
          break;
        }
    
        anterior_eny = aux_eny;
        aux_eny = aux_eny->prox;
                     
       }//for eny
       
       if(vcolisao == true){
       continue;
       }
       
       else{
       anterior_shot = aux_shot;
       aux_shot = aux_shot->prox;
       }
       
       }//for shot             
    
      
 
     
     
     
     
     
     
     
     
     
     //colisao de tiros com o boss e vice versa


       if(colisionenablenow == true){
       aux_shot = inicio_shot;
       aux_boos_shot = inicio_boos_shot;       
       for (int inicio = 0; inicio < bti; inicio ++){
       bvcolisao = false;   
       vcolisao = false;  
        
                                      
       if ( aux_boos_shot->y + al_get_bitmap_height(aux_boos_shot->i) > bm[0].y && 
       aux_boos_shot->x >=  bm[0].x && 
       aux_boos_shot->x + al_get_bitmap_width(aux_boos_shot->i) <= bm[0].x + al_get_bitmap_width(bm[0].i) 
       || aux_boos_shot->y + al_get_bitmap_height(aux_boos_shot->i) > bm[0].y && 
       aux_boos_shot->x < bm[0].x && 
       aux_boos_shot->x + al_get_bitmap_width(aux_boos_shot->i) >= bm[0].x 
       || aux_boos_shot->y + al_get_bitmap_height(aux_boos_shot->i) > bm[0].y && 
       aux_boos_shot->x <= bm[0].x + al_get_bitmap_width(bm[0].i) && 
       aux_boos_shot->x + al_get_bitmap_width(aux_boos_shot->i) > bm[0].x + al_get_bitmap_width(bm[0].i) )       
       
       {  
                 
                 
                 remover (4);
                 bvcolisao = true ; 
                 countador = 0;               
                 hp -=1;
                
       }
                   
       if (ti > 0){
       if (aux_shot->ytrue < bm[12].y + (al_get_bitmap_height(bm[12].i)/2) && 
       aux_shot->xtrue >=  bm[12].x && 
       aux_shot->xtrue + al_get_bitmap_width(aux_shot->i) <= bm[12].x + al_get_bitmap_width(bm[12].i) 
       ||aux_shot->ytrue < bm[12].y + (al_get_bitmap_height(bm[12].i)/2)  && 
       aux_shot->xtrue < bm[12].x && 
       aux_shot->xtrue + al_get_bitmap_width(aux_shot->i) >= bm[12].x 
       || aux_shot->ytrue < bm[12].y + (al_get_bitmap_height(bm[12].i)/2) && 
       aux_shot->xtrue <= bm[12].x + al_get_bitmap_width(bm[12].i) && 
       aux_shot->xtrue + al_get_bitmap_width(aux_shot->i) > bm[12].x + al_get_bitmap_width(bm[12].i) )
       
       {
       
             remover (1);
             vcolisao = true;   
             score += 10;
             booslife -=1;
             countadorboss = 0;
            
             
            
       }

                       
       }
       if(bvcolisao == true || vcolisao == true){
       continue;
       }
       
       else{
       anterior_boos_shot = aux_boos_shot;
       aux_boos_shot = aux_boos_shot->prox;
       }
             
       
       }//for shot             
    
       }
     
        
     
     if(score >= scorepass){
              
       if(scorepass == 250)
       velocidade += 0.4;
          
       if(scorepass == 550)   
       velocidade +=0.8;
       
       if(scorepass == 850){   
       velocidade +=1.4;
       
       }
     
      
       if(score >= 1000 && ini == 0) { 
     
       if(invocou == false){       
       invocou = true;                 
       printboss = true;
       al_start_timer(bossdng);   
       stop = true; 
       bossmove = true;  
       } 
          
       }       
              
       if(scorepass <=850)       
       scorepass += 150;
       
     
     }
     
 

     
     if (bossmove){
     podsenhar = true;
     if(bm[0].x != vfbmx || bm[0].y != vfbmy){
               if(firestep == true){
               if(fireand < 3)
               fireand ++;
               else
               fireand = 1;
            
               firetime = clock();
               firestep = false; 
               }
            
               else if(clock() - firetime >= 50)
               firestep = true;   
               }
               
     else if(bm[12].y >= -50){
      if(firestep == true){
               if(fireand < 3)
               fireand ++;
               else
               fireand = 1;
            
               firetime = clock();
               firestep = false; 
               }
            
               else if(clock() - firetime >= 50)
               firestep = true;   
               }
     else 
      podsenhar = false;
     }
     
   
     if (vfx != bm[1].x || vfy != bm[1].y ){
     
     vfx = bm[1].x;
     vfy = bm[1].y;
     if(!bossmove)
     podsenhar = true;  
          
     }  
     
     else if (vfbmx != bm[0].x || vfbmy != bm[0].y ){
           
     vfbmx = bm[0].x;
     vfbmy = bm[0].y;
     if(!bossmove)
      podsenhar = true; 
     
     }
     
     else if (!bossmove){
     podsenhar = false;
     }
     
     
     
     if(hp <= 0){
        al_clear_to_color(al_map_rgb(0,0,0));
        al_draw_text(fonte, al_map_rgb(255,255,255), 640, 200, ALLEGRO_ALIGN_CENTRE, "GAME OVER!");
        al_draw_textf(fonte, al_map_rgb(255,255,255), 640, 450, ALLEGRO_ALIGN_CENTRE, "SUA PONTUACAO FOI DE: %d", score);
        al_flip_display();
        al_rest(3.0);
        al_stop_timer(timer);
        al_stop_timer(timer2);
        al_stop_timer(enemy);
        al_stop_timer(tempo);
        al_stop_timer(bossdng); 
        al_stop_timer(flash); 
        
        menu();
        
        if(finalizar == false){
        
        al_start_timer(timer);
        al_start_timer(timer2);
        al_start_timer(enemy);  
        al_start_timer(tempo); 
        al_start_timer(flash);
        
        
        resetall ();
            
        }
         
       }
      
      if (bm[12].y >= -50)
      {
         stop = false;
         
      }
      
      
      
      if(booslife > -10 && booslife <= 0){
      
        if(printboss){ 
        colisionenablenow = false;
        paradaboss = 0;
        al_stop_timer(timer2);       
        } 
            
            
        startcouting ++;
        
                        
        if (startcouting >= 700){ 
                         
        al_clear_to_color(al_map_rgb(0,0,0));
        al_draw_text(fonte, al_map_rgb(255,255,255), 640, 200, ALLEGRO_ALIGN_CENTRE, "CONGRATULACOES!");
        al_draw_textf(fonte, al_map_rgb(255,255,255), 640, 450, ALLEGRO_ALIGN_CENTRE, "SUA PONTUACAO FOI DE: %d", score);
        al_flip_display();
        al_rest(3.0);
        al_stop_timer(timer);
        al_stop_timer(timer2);
        al_stop_timer(enemy);
        al_stop_timer(tempo);
        al_stop_timer(bossdng); 
        al_stop_timer(flash); 
        
        menu();
        
        if(finalizar == false){
        
        al_start_timer(timer);
        al_start_timer(timer2);
        al_start_timer(enemy);  
        al_start_timer(tempo); 
        al_start_timer(flash);
        
        
        resetall ();
        
       }
  
      }


        }  
      
      
    
 
  
     }//gameloop  
      
     al_destroy_display(janela);
     free_all();
     for (short int i=0; i<13; i++){    
     al_destroy_bitmap(bm[i].i);  
     }  
     al_destroy_event_queue(eventos);  
     al_destroy_timer(timer);   
     al_destroy_timer(timer2);  
     al_destroy_timer(enemy);  
     al_destroy_timer(tempo); 
     al_destroy_timer(bossdng); 
     al_destroy_timer(flash);     
}
