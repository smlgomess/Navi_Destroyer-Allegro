void loadexpld (){
                     
     explo *explode = (explo *) malloc (sizeof(explo)); 
     explode->quant = 44;
     explode->x = aux_eny->x; 
     explode->y = aux_eny->y;
     
     if(inicio_explo == NULL){             
     inicio_explo = explode;
     fim_explo = explode;
     fim_explo->prox = NULL;
     }
     
     else{
     fim_explo->prox = explode;
     fim_explo = explode;
     fim_explo->prox = NULL;     
     }
                
     qu+=1;
     
                 
}
