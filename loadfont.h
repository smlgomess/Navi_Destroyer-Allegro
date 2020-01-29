 void loadfont()
{
    fonte = al_load_font("AdobeGothicStd-Bold.TTF",35,0);
    if(fonte == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Carregar Fonte!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit (0);
    }
}
