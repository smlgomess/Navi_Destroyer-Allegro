#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <math.h>

//imagem em geral
struct IMAGEM
{
    ALLEGRO_BITMAP *i;
    float x, y;   
    bool verificar;      
    
};

typedef struct IMAGEM img;


//tiro do boss
struct boss_shot
{
    ALLEGRO_BITMAP *i;
    float x, y;   
   // bool verificar;      
    struct boss_shot *prox;
};

typedef struct boss_shot b_s;


//nome danger  
struct etceterah
{
    ALLEGRO_BITMAP *i;
    float x, y;   
    bool verificar;  
    short int quantz;    
    struct etceterah *prox;
};

typedef struct etceterah etctr;


//explosao durante a destruição de um mob
struct explosao
{
    ALLEGRO_BITMAP *i;
    float x, y;  
    short int quant; 
    long double tim;
    bool veriftime;
    struct explosao *prox;   
    
};

typedef struct explosao explo;


//tiro do player
struct tiro
{
    ALLEGRO_BITMAP *i;
    float x, y;
    float imgx, imgy;
    bool verificar;
    bool desenhar;
    float grau2;
    float xcos, ysin;
    float xtrue, ytrue;
    short int verfandamento;    
    struct tiro *prox;    
};

typedef struct tiro din;


//mobs
struct eneymies
{
    ALLEGRO_BITMAP *i;
    float x, y;    
    bool verificar;            
    short int verfandamento;
    short int life;
    int paradamob;
    int countmob;
    struct eneymies *prox;
    
};

typedef struct eneymies din2;


ALLEGRO_DISPLAY *janela = NULL;

img bm[13];
explo *inicio_explo;
explo *fim_explo;
explo *aux_explo;
explo *anterior_explo;
din *inicio_shot;
din *fim_shot; 
din *aux_shot;
din *anterior_shot;
din2 *inicio_eny;
din2 *fim_eny; 
din2 *aux_eny;
din2 *anterior_eny;
etctr * aux_dangers;
b_s *inicio_boos_shot;
b_s *fim_boos_shot; 
b_s *aux_boos_shot;
b_s *anterior_boos_shot;
ALLEGRO_FONT *fonte = NULL;
ALLEGRO_EVENT_QUEUE *eventos = NULL;
ALLEGRO_KEYBOARD_STATE kbdstate;
ALLEGRO_KEYBOARD_STATE kbdstat;


void loadimage()
{
    
    bm[0].i = NULL;
    bm[0].i = al_load_bitmap("Images/navepronatec.png");
    if(bm[0].i == NULL)
    {
       al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem da n", NULL, ALLEGRO_MESSAGEBOX_ERROR);
       exit(0);
    }
   
    
    bm[1].i = NULL;
    bm[1].i = al_load_bitmap("Images/fundo.png");
    if(bm[1].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de fundo", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
     
    bm[2].i = NULL;
    bm[2].i = al_load_bitmap("Images/jogar.png");
    if(bm[2].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar o botao jogar", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    bm[3].i = NULL;
    bm[3].i = al_load_bitmap("Images/jogar(under).png");
    if(bm[3].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar o botao jogar 2", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    bm[4].i = NULL;
    bm[4].i = al_load_bitmap("Images/rules.png");
    if(bm[4].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar o botao instrução", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    bm[5].i = NULL;
    bm[5].i = al_load_bitmap("Images/rules(under).png");
    if(bm[5].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar o botao instrução 2", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    bm[6].i = NULL;
    bm[6].i = al_load_bitmap("Images/sair.png");
    if(bm[6].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar o botao sair", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    bm[7].i = NULL;
    bm[7].i = al_load_bitmap("Images/sair(under).png");
    if(bm[7].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar o botao sair 2", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    bm[8].i = NULL;
    bm[8].i = al_load_bitmap("Images/fundo_menu.png");
    if(bm[8].i == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem de fundo do menu", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    bm[9].i = NULL;
    bm[9].i = al_load_bitmap("Images/fireship1.png");
    if(bm[9].i == NULL)
    {
       al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a anima do fogo da nave", NULL, ALLEGRO_MESSAGEBOX_ERROR);
       exit(0);
    }
    
    bm[10].i = NULL;
    bm[10].i = al_load_bitmap("Images/fireship2.png");
    if(bm[10].i == NULL)
    {
       al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a anima do fogo da nave", NULL, ALLEGRO_MESSAGEBOX_ERROR);
       exit(0);
    }
    
    bm[11].i = NULL;
    bm[11].i = al_load_bitmap("Images/fireship3.png");
    if(bm[11].i == NULL)
    {
       al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a anima do fogo da nave", NULL, ALLEGRO_MESSAGEBOX_ERROR);
       exit(0);
    }
    
     bm[12].i = NULL;
    bm[12].i = al_load_bitmap("Images/boss.png");
    if(bm[12].i == NULL)
    {
       al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar a Imagem do boss", NULL, ALLEGRO_MESSAGEBOX_ERROR);
       exit(0);
    }
    
    
}
