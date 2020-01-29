const int wds = 1240;
const int hgs = 700;


void create()
{
    janela = al_create_display(wds, hgs);
    if(janela == NULL)
    {   
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Criar a Janela!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }
    
    
    eventos = al_create_event_queue();
    if(eventos == NULL)
    {
        al_show_native_message_box(janela, "ERRO", "ERRO", "Erro ao Criar Fila de Eventos", NULL, ALLEGRO_MESSAGEBOX_ERROR);
        exit(0);
    }


}
