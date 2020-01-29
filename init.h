void init()
{
     if(al_init() == 0)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Inicializar o Allegro!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    if(al_init_image_addon() == 0)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Inicializar a Biblioteca de Imagem!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
   
    
    al_init_font_addon();
    
    if(!al_init_ttf_addon())
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Inicializar a Fonte TTF!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    
    
    if(!al_install_keyboard())
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Instalar o teclado!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    
    if(!al_install_mouse())
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Instalar o mouse!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
     
    create();
    loadimage();
    loadfont();

}
