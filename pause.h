bool pause = false;
int wait;
bool solta = false;

void pausegame(){

 al_register_event_source(eventos, al_get_keyboard_event_source());
 
 al_draw_text(fonte, al_map_rgb(255,255,255), (wds/2)-70, (hgs/2)-70, 0, "PAUSE");
 al_flip_display();
 
 
 while (pause){

 ALLEGRO_EVENT evento;
 al_wait_for_event(eventos, &evento);        
 al_get_keyboard_state(&kbdstat);
 
   
      
        if(evento.type == ALLEGRO_EVENT_KEY_UP && evento.keyboard.keycode == ALLEGRO_KEY_P && solta == true){
         pause = false;
         drawall();
         }
         
         if(evento.type == ALLEGRO_EVENT_KEY_UP && evento.keyboard.keycode == ALLEGRO_KEY_P){
         solta = true;        
         }
        
        
  }
  
}   
     
     
