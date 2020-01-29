short int qu=0;
bool removeu = false;

void explode (int q, int score, int hp, int min, int seg, bool ida, short int b, short int g){      
     
        
    aux_explo = inicio_explo; 
   
    for(short int i = 0; i<q; i++){       
       
    if (aux_explo->quant == 44){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0000_Camada-1.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
           
    if (aux_explo->quant == 43){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0001_Camada-2.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 42){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0002_Camada-3.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 41){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0003_Camada-4.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 40){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0004_Camada-5.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 39){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0005_Camada-6.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 38){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0006_Camada-7.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 37){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0007_Camada-8.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 36){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0008_Camada-9.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 35){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0009_Camada-10.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 34){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0010_Camada-11.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 33){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0011_Camada-12.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 32){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0012_Camada-13.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 31){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0013_Camada-14.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 30){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0014_Camada-15.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 29){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0015_Camada-16.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 28){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0016_Camada-17.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 27){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0017_Camada-18.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 26){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0018_Camada-19.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 25){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0019_Camada-20.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 24){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0020_Camada-21.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 23){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0021_Camada-22.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 22){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0022_Camada-23.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 21){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0023_Camada-24.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 20){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0024_Camada-25.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 19){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0025_Camada-26.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 18){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0026_Camada-27.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 17){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0027_Camada-28.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 16){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0028_Camada-29.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 15){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0029_Camada-30.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 14){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0030_Camada-31.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 13){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0031_Camada-32.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 12){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0032_Camada-33.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 11){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0033_Camada-34.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 10){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0034_Camada-35.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 9){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0035_Camada-36.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 8){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0036_Camada-37.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 7){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0037_Camada-38.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 6){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0038_Camada-39.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 5){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0039_Camada-40.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 4){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0040_Camada-41.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 3){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0041_Camada-42.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 2){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0042_Camada-43.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
           
    if (aux_explo->quant == 1){
    aux_explo->i = NULL;
    aux_explo->i= al_load_bitmap("Explod/expld_0043_Camada-44.png");    
    if(aux_explo->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de explosao", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    
    aux_explo = aux_explo->prox;

    }//for
    
    
    aux_explo = inicio_explo; 
    for(short int i = 0; i < q; i++){

    al_draw_bitmap(aux_explo->i, aux_explo->x, aux_explo->y, 0);    
    
    if(aux_explo->quant == 44){
         aux_explo->quant = aux_explo->quant - 1;        
         aux_explo->veriftime = false;
         //printf("error\n");
         }
    
         else{
         
         if(aux_explo->veriftime == false){
         aux_explo->tim = clock();
         aux_explo->veriftime = true;
         }
             
         if(clock() - aux_explo->tim > 20){
         aux_explo->quant = aux_explo->quant - 1;
         aux_explo->veriftime = false;
         }    
         }
    
    //printf ("aux %d\n", aux_explo->quant);
    aux_explo = aux_explo->prox;
          
    } //for
    
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
        
    al_flip_display();
  
  
    
}
