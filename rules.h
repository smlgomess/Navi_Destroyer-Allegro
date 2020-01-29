bool verifback = false;

void instruct ()

     {
       /*       
     
      al_clear_to_color(al_map_rgb(88,188,36));
      al_draw_text(fonte, al_map_rgb(255,255,255), 400, 15, ALLEGRO_ALIGN_CENTRE, "INSTRUCOES");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 80, ALLEGRO_ALIGN_LEFT, "Use o mouse para clicar nas bolas que irao ficar saltitan-");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 110, ALLEGRO_ALIGN_LEFT, "do na tela.");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 140, ALLEGRO_ALIGN_LEFT, "Cada clique correto ganha 5 pontos. O objetivo eh fazer ");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 170, ALLEGRO_ALIGN_LEFT, "100 pontos, o que ira fazer com que voce avance de fase.");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 220, ALLEGRO_ALIGN_LEFT, "Ao todo sao 4 fases, cada fase a velocidade aumenta, en-");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 250, ALLEGRO_ALIGN_LEFT, "tao FIQUE ATENTO!");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 300, ALLEGRO_ALIGN_LEFT, "Cada clique errado voce ira perder uma vida. Ao todo sao 7,");
      al_draw_text(fonte, al_map_rgb(255,255,255), 10, 330, ALLEGRO_ALIGN_LEFT, "mas voce ganha uma a cada nivel que passa, so de cortesia.");
      al_draw_text(fonte, al_map_rgb(255,255,255), 400, 380, ALLEGRO_ALIGN_CENTRE, "DE NADA");
      al_draw_text(fonte, al_map_rgb(255,255,255), 400, 410, ALLEGRO_ALIGN_CENTRE, "E");
      al_draw_text(fonte, al_map_rgb(255,255,255), 400, 440, ALLEGRO_ALIGN_CENTRE, "BOA SORTE ;-)");
      
      imagem[12].x = 15;
      imagem[12].y = 480;
      al_draw_bitmap(imagem[12].i,imagem[12].x, imagem[12].y, 0);
      
      al_flip_display();
      
       
                     do{
                           
                           ALLEGRO_EVENT evento;
                           al_wait_for_event(eventos, &evento);  
                      
                         if(evento.type == ALLEGRO_EVENT_MOUSE_AXES)
                          {    
                               
                                
                           if(evento.mouse.x >= imagem[12].x && evento.mouse.x <= al_get_bitmap_width(imagem[12].i) + imagem[12].x &&
                           evento.mouse.y >= imagem[12].y && evento.mouse.y <= al_get_bitmap_height(imagem[12].i) + imagem[12].y)
                           {
                                    al_clear_to_color(al_map_rgb(88,188,36));
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 400, 15, ALLEGRO_ALIGN_CENTRE, "INSTRUCOES");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 80, ALLEGRO_ALIGN_LEFT, "Use o mouse para clicar nas bolas que irao ficar saltitan-");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 110, ALLEGRO_ALIGN_LEFT, "do na tela.");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 140, ALLEGRO_ALIGN_LEFT, "Cada clique correto ganha 5 pontos. O objetivo eh fazer ");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 170, ALLEGRO_ALIGN_LEFT, "100 pontos, o que ira fazer com que voce avance de fase.");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 220, ALLEGRO_ALIGN_LEFT, "Ao todo sao 4 fases, cada fase a velocidade aumenta, en-");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 250, ALLEGRO_ALIGN_LEFT, "tao FIQUE ATENTO!");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 300, ALLEGRO_ALIGN_LEFT, "Cada clique errado voce ira perder uma vida. Ao todo sao 7,");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 10, 330, ALLEGRO_ALIGN_LEFT, "mas voce ganha uma a cada nivel que passa, so de cortesia.");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 400, 380, ALLEGRO_ALIGN_CENTRE, "DE NADA");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 400, 410, ALLEGRO_ALIGN_CENTRE, "E");
                                    al_draw_text(fonte, al_map_rgb(255,255,255), 400, 440, ALLEGRO_ALIGN_CENTRE, "BOA SORTE ;-)");
      
                                    imagem[13].x = 15;
                                    imagem[13].y = 480;
                                    al_draw_bitmap(imagem[13].i,imagem[13].x, imagem[13].y, 0);       
                                           
                                    al_flip_display();      
                                           
                                           
                                           }
                                           
                                           
                                else{      
                                                al_clear_to_color(al_map_rgb(88,188,36));
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 400, 15, ALLEGRO_ALIGN_CENTRE, "INSTRUCOES");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 80, ALLEGRO_ALIGN_LEFT, "Use o mouse para clicar nas bolas que irao ficar saltitan-");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 110, ALLEGRO_ALIGN_LEFT, "do na tela.");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 140, ALLEGRO_ALIGN_LEFT, "Cada clique correto ganha 5 pontos. O objetivo eh fazer ");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 170, ALLEGRO_ALIGN_LEFT, "100 pontos, o que ira fazer com que voce avance de fase.");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 220, ALLEGRO_ALIGN_LEFT, "Ao todo sao 4 fases, cada fase a velocidade aumenta, en-");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 250, ALLEGRO_ALIGN_LEFT, "tao FIQUE ATENTO!");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 300, ALLEGRO_ALIGN_LEFT, "Cada clique errado voce ira perder uma vida. Ao todo sao 7,");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 10, 330, ALLEGRO_ALIGN_LEFT, "mas voce ganha uma a cada nivel que passa, so de cortesia.");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 400, 380, ALLEGRO_ALIGN_CENTRE, "DE NADA");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 400, 410, ALLEGRO_ALIGN_CENTRE, "E");
                                                al_draw_text(fonte, al_map_rgb(255,255,255), 400, 440, ALLEGRO_ALIGN_CENTRE, "BOA SORTE ;-)");
      
                                                imagem[12].x = 15;
                                                imagem[12].y = 480;
                                                al_draw_bitmap(imagem[12].i,imagem[12].x, imagem[12].y, 0);
                                                
                                                al_flip_display();
                                           
                                           }     
                                           
            
                          
                          }
                          
                          
                          if(evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
                          {   
                              if(evento.mouse.x >= imagem[12].x && evento.mouse.x <= al_get_bitmap_width(imagem[12].i) + imagem[12].x &&
                              evento.mouse.y >= imagem[12].y && evento.mouse.y <= al_get_bitmap_height(imagem[12].i) + imagem[12].y)
                              {
                          
                               verifback = true;
                               al_clear_to_color(al_map_rgb(188,220,36));
                               imagem[5].x = 100;
                               imagem[5].y = 15;
                               al_draw_bitmap(imagem[5].i,imagem[5].x, imagem[5].y, 0);
                               imagem[3].x = 300;
                               imagem[3].y = 150;
                               al_draw_bitmap(imagem[3].i,imagem[3].x, imagem[3].y, 0);
                               imagem[2].x = 450;
                               imagem[2].y = 230;
                               al_draw_bitmap(imagem[2].i,imagem[2].x, imagem[2].y, 0);
                               imagem[4].x = 20;
                               imagem[4].y = 450;
                               al_draw_bitmap(imagem[4].i,imagem[4].x, imagem[4].y, 0);
                               imagem[10].x = 200;
                               imagem[10].y = 380;
                               al_draw_bitmap(imagem[10].i,imagem[10].x, imagem[10].y, 0);
                               imagem[8].x = 200;
                               imagem[8].y = 455;
                               al_draw_bitmap(imagem[8].i,imagem[8].x, imagem[8].y, 0);
                               imagem[6].x = 200;
                               imagem[6].y = 530;
                               al_draw_bitmap(imagem[6].i,imagem[6].x, imagem[6].y, 0);
     
     
     
     
                               al_flip_display();
                          
                          
                              }
                          }

                          
                          }while (!verifback);
                          */
      
     
     }
