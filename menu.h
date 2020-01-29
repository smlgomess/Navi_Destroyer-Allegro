bool finalizar = false;

void menu(){
     
     int verifica = 0;
     
     
     al_clear_to_color(al_map_rgb(0,0,0));
     bm[8].x = 0;
     bm[8].y = 0;
     al_draw_bitmap(bm[8].i,bm[8].x, bm[8].y, 0);
     bm[2].x = 40;
     bm[2].y = 600;
     al_draw_bitmap(bm[2].i,bm[2].x, bm[2].y, 0);
     bm[4].x = 450;
     bm[4].y = 600;
     al_draw_bitmap(bm[4].i,bm[4].x, bm[4].y, 0);
     bm[6].x = 870;
     bm[6].y = 600;
     al_draw_bitmap(bm[6].i,bm[6].x, bm[6].y, 0);
    
  
     
     al_flip_display();
     
     
     al_register_event_source(eventos, al_get_display_event_source(janela));
     al_register_event_source(eventos, al_get_mouse_event_source());
     
     
     
     while (verifica == 0){
     
            
     ALLEGRO_EVENT evento;
     al_wait_for_event(eventos, &evento);     
              
    	
	 if(evento.type == ALLEGRO_EVENT_MOUSE_AXES) {
	   
       
                     
        if(evento.mouse.x >= bm[2].x && evento.mouse.x <= al_get_bitmap_width(bm[2].i) + bm[2].x &&
        evento.mouse.y >= bm[2].y && evento.mouse.y <= al_get_bitmap_height(bm[2].i) + bm[2].y)
        {
                       
               al_clear_to_color(al_map_rgb(0,0,0));    
                         
               al_draw_bitmap(bm[8].i,bm[8].x, bm[8].y, 0);
               
               bm[3].x = bm[2].x;
               bm[3].y = bm[2].y;
               al_draw_bitmap(bm[3].i,bm[3].x, bm[3].y, 0);
            
               al_draw_bitmap(bm[4].i,bm[4].x, bm[4].y, 0);
              
               al_draw_bitmap(bm[6].i,bm[6].x, bm[6].y, 0);
    
               al_flip_display ();
                             
           
        }  
        
       
        
        
        else if(evento.mouse.x >= bm[4].x && evento.mouse.x <= al_get_bitmap_width(bm[4].i) + bm[4].x &&
        evento.mouse.y >= bm[4].y && evento.mouse.y <= al_get_bitmap_height(bm[4].i) + bm[4].y)
        {
                       
               al_clear_to_color(al_map_rgb(0,0,0));    
                         
               al_draw_bitmap(bm[8].i,bm[8].x, bm[8].y, 0);
               
               
               al_draw_bitmap(bm[2].i,bm[2].x, bm[2].y, 0);
               
               bm[5].x = bm[4].x;
               bm[5].y = bm[4].y;            
               al_draw_bitmap(bm[5].i,bm[5].x, bm[5].y, 0);
              
               al_draw_bitmap(bm[6].i,bm[6].x, bm[6].y, 0);
    
                al_flip_display ();
               
              
        } 
        
        
        else if(evento.mouse.x >= bm[6].x && evento.mouse.x <= al_get_bitmap_width(bm[6].i) + bm[6].x &&
        evento.mouse.y >= bm[6].y && evento.mouse.y <= al_get_bitmap_height(bm[6].i) + bm[6].y)
        {
                       
                al_clear_to_color(al_map_rgb(0,0,0));    
                         
               al_draw_bitmap(bm[8].i,bm[8].x, bm[8].y, 0);
               
               
               al_draw_bitmap(bm[2].i,bm[2].x, bm[2].y, 0);
            
               al_draw_bitmap(bm[4].i,bm[4].x, bm[4].y, 0);
               
               bm[7].x = bm[6].x;
               bm[7].y = bm[6].y;              
               al_draw_bitmap(bm[7].i,bm[7].x, bm[7].y, 0);
               
               
                al_flip_display ();
              
           
        }    
         
       else
        {  
             
               al_clear_to_color(al_map_rgb(0,0,0));
              
               al_draw_bitmap(bm[8].i,bm[8].x, bm[8].y, 0);
              
               al_draw_bitmap(bm[2].i,bm[2].x, bm[2].y, 0);
             
               al_draw_bitmap(bm[4].i,bm[4].x, bm[4].y, 0);
             
               al_draw_bitmap(bm[6].i,bm[6].x, bm[6].y, 0);
    
                al_flip_display ();
     
     
     
     
              al_flip_display();
     
         }
        
              
                             
              }//mouse axes

  
        if(evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
              {
                             
        if(evento.mouse.x >= bm[2].x && evento.mouse.x <= al_get_bitmap_width(bm[2].i) + bm[2].x &&
        evento.mouse.y >= bm[2].y && evento.mouse.y <= al_get_bitmap_height(bm[2].i) + bm[2].y)
        {
                       
              verifica = 1; 
                             
           
        }              
  
        if(evento.mouse.x >= bm[4].x && evento.mouse.x <= al_get_bitmap_width(bm[4].i) + bm[4].x &&
        evento.mouse.y >= bm[4].y && evento.mouse.y <= al_get_bitmap_height(bm[4].i) + bm[4].y)
        {

                             
              verifica = 2;            
                             
        }
           
               
        
        if(evento.mouse.x >= bm[6].x && evento.mouse.x <= al_get_bitmap_width(bm[6].i) + bm[6].x &&
        evento.mouse.y >= bm[6].y && evento.mouse.y <= al_get_bitmap_height(bm[6].i) + bm[6].y)
        {
              
                             
              verifica = 3;            
                             
              
           
        }    
  
  
  
  
        }
        
        if (verifica == 1){
                     
                     break;
                     }
                     
       else if (verifica == 2){
                     
                  /*   ALLEGRO_EVENT evento;
                     al_wait_for_event(eventos, &evento);*/
                     
                     instruct ();
                     verifback = false;
                     verifica = 0;
                  
                     }
                     
                     
                
                     
                     
          if (verifica == 3){
                       
                      finalizar = true;
                      break;
                                          
                          
                    }                       

  
 
     
   
     }   //while verifica
     

  
}
