     bool desenhar = false;
     float  mx, my;
     float velocidade = 1;     
     short int  countador=2, limite=20, countadorboss = 2;            
     float vfx, vfy, vfbmx, vfbmy;     
     bool vcolisao, bvcolisao;
     bool remov;
     int scorepass=250;
     short int limiteny = 20;
     float firetime;  
     bool firestep = true;
     bool stop = false;
     bool bossmove = false;
     int booslife = 100;
     short int velocidade_tiro_boss = 4, tempo_tiro_boss=850;
     bool entrou = true; 
     short int startcouting = 0;     
     bool colisionenablenow = true; 
        
void resetall (){       
        
        mx = bm[0].x + (al_get_bitmap_width(bm[0].i)/2);
        my = bm[0].y + (al_get_bitmap_height(bm[0].i)/2);                      
        
        ti =0;
        ini = 0;
        bti = 0;  
           
        score = 0;
        hp = 7;
        min = 0;
        seg = 0;
        desenhar = false;  
        velocidade = 1;     
        countador=2;
        countadorboss=2;
        limite=20;
        scorepass=250;
        limiteny = 20;
        grau=0;
        qu = 0;
        removeu = false;
        free_all();
        pause = false;
        solta = false;
        parada = 1;
        paradaboss = 1;
        ida = true;  
        invocou = false;
        subida = true;
        zeta = 0; 
        timing;
        verificadanger = false;
        andarboss = false;
        podsenhar = false;
        printboss = false;
        okay = false;
        stop = false; 
        bossmove = false;  
        booslife = 100;
        velocidade_tiro_boss = 4;
        tempo_tiro_boss=850;
        entrou = true;
        andaivos = true; 
        startcouting = 0; 
        colisionenablenow = true;
        
        b = 255;
        g = 255;
        
        al_clear_to_color(al_map_rgb(255,255,255));
        bm[1].x = (wds/2) - (al_get_bitmap_width(bm[1].i)/2) ;
        bm[1].y = (hgs/2) - (al_get_bitmap_height(bm[1].i)/2) ;
        vfx = bm[1].x;
        vfy = bm[1].y;
     
        al_draw_bitmap(bm[1].i, bm[1].x,  bm[1].y, 0);
        bm[0].y = (hgs/2) - (al_get_bitmap_height(bm[0].i)/2);
        bm[0].x = (wds/2) - (al_get_bitmap_width(bm[0].i)/2);     
        al_draw_bitmap(bm[0].i, bm[0].x,  bm[0].y, 0);
        
        bm[12].x = wds/2 - (al_get_bitmap_width(bm[12].i)/2);
        bm[12].y = 0 - al_get_bitmap_height(bm[12].i);
     
        al_draw_textf(fonte, al_map_rgb(255,255,255), 10, 10, ALLEGRO_ALIGN_LEFT, "SCORE:  %d", score);
        al_draw_textf(fonte, al_map_rgb(255,255,255), 250, 10, ALLEGRO_ALIGN_LEFT, "LIFE:  %d", hp);
        al_draw_textf(fonte, al_map_rgb(255,255,255), 600, 10, ALLEGRO_ALIGN_LEFT, "%d min & %d seg", min, seg);
        
        
        
        t = clock();
        while(clock() - t < 200)
        {
                   }
 
        
 
        al_flip_display();
 }
