bool invocou = false;
bool subida = true;
short int zeta = 0; 
float timing;
bool verificadanger = false;
bool andarboss = false;
bool andaivos = true;

void invoque_boss  (int q, int score, int hp, int min, int seg, bool ida, short int b, short int g){      
    if(verificadanger == false){
    while(bm[0].y + al_get_bitmap_height(bm[0].i) < hgs || bm[0].x + (al_get_bitmap_width(bm[0].i)/2) < wds /2 
    ||  bm[0].x + (al_get_bitmap_width(bm[0].i)/2) > wds/2 || zeta != 0)
    {                      
    if (zeta==0){
    if(aux_dangers != NULL){    
    free(aux_dangers);
    aux_dangers = NULL;
    }
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous;               
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0000_DANGER-copiar-25.png");  
    if(bm[12].y < -50){                  
    okay = true;
    }
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==1){   
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous;      
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0001_DANGER-copiar-24.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==2){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous;      
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0002_DANGER-copiar-23.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==3){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0003_DANGER-copiar-22.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==4){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0004_DANGER-copiar-21.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==5){
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0005_DANGER-copiar-20.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==6){  
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0006_DANGER-copiar-19.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==7){   
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0007_DANGER-copiar-18.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==8){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0008_DANGER-copiar-17.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==9){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0009_DANGER-copiar-16.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==10){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0010_DANGER-copiar-15.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==11){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0011_DANGER-copiar-14.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==12){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0012_DANGER-copiar-13.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==13){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0013_DANGER-copiar-12.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==14){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0014_DANGER-copiar-11.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==15){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0015_DANGER-copiar-10.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==16){  
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0016_DANGER-copiar-9.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==17){ 
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0017_DANGER-copiar-8.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==18){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0018_DANGER-copiar-7.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==19){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0019_DANGER-copiar-6.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==20){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0020_DANGER-copiar-5.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==21){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0021_DANGER-copiar-4.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==22){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0022_DANGER-copiar-3.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==23){   
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0023_DANGER-copiar-2.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==24){    
    free (aux_dangers);
    aux_dangers = NULL;
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous; 
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0024_DANGER-copiar.png");    
    if(aux_dangers->i== NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }
    
    if (zeta==25){  
    free (aux_dangers);
    aux_dangers = NULL;   
    etctr *dangerous = (etctr *) malloc (sizeof(etctr));         
    dangerous->x = 200; 
    dangerous->y = 250;
    aux_dangers = dangerous;     
    aux_dangers->i = NULL;
    aux_dangers->i= al_load_bitmap("Images/Danger/danger_0025_DANGER.png");    
    if(aux_dangers->i== NULL)
    {
        
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de danger", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    }  
   
    if(zeta<25 && subida == true){ 
    zeta++;
     }
     
    else if(zeta>0 && subida == false){
     zeta--;
     }
     
     
    else if(zeta==25){
    subida = false;
    zeta--;
    }
         
    else if(zeta == 0){
      subida = true;
      zeta++;
      
      } 
      break;
   }
   }
   
   if (bm[0].y + al_get_bitmap_height(bm[0].i) >= hgs && bm[12].y == 0 - al_get_bitmap_height(bm[12].i) && zeta == 0){
   okay = false; 
   verificadanger = true;
   if(aux_dangers != NULL){
   free (aux_dangers);
   aux_dangers = NULL;
    }
   }
   
   
   if (bm[0].y + al_get_bitmap_height(bm[0].i) >= hgs && bm[0].x + (al_get_bitmap_width(bm[0].i)/2) == wds /2 && zeta == 0) {
   
   while(bm[12].y < -50){
   bm[12].y +=1;
   timing = clock();
   while(clock() - timing < 10){
                 }
   //drawall();
   break;
   }
  }
  
  if(bm[12].y >= -50 && andaivos == true){
  
  if (bm[12].x > 0 && andarboss == false){
    bm[12].x -= 4;
  if(bm[12].x <= 0){
    andarboss = true;            
  }
  }
    
  else if (bm[12].x + al_get_bitmap_width(bm[12].i) < wds && andarboss == true){  
     bm[12].x += 4;
  if(bm[12].x + al_get_bitmap_width(bm[12].i) >= wds){
    andarboss = false;            
  }
  }
 }


}
