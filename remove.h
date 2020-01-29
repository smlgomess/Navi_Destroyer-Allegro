void remover (int teste){

//teste == 1 remove tiro, se for == 2, remove o inimigo, 3 == explode, 4 bosshot      
         
         if(teste == 1){

                
             if(aux_shot == inicio_shot){
                 inicio_shot = inicio_shot->prox;          
                 free(aux_shot);                 
                 aux_shot = inicio_shot;  
                 ti -=1;
                }
                
             else if (aux_shot == fim_shot){
                
                anterior_shot->prox = NULL;          
                fim_shot = anterior_shot;
                free(aux_shot);                
                aux_shot = NULL;
                ti -=1;
                }
                
             else{ 
                
                 anterior_shot->prox = aux_shot->prox;
                 free(aux_shot);                 
                 aux_shot = anterior_shot->prox;                 
                 ti -=1;
                }
       
       }
       
       
       if(teste == 2){

                
             if(aux_eny == inicio_eny){
                 inicio_eny = inicio_eny->prox;          
                 free(aux_eny);
                 aux_eny = inicio_eny;  
                 ini -=1;
                }
                
             else if (aux_eny == fim_eny){
                
                anterior_eny->prox = NULL;          
                fim_eny = anterior_eny;
                free(aux_eny);
                aux_eny = NULL;
                ini -=1;
                }
                
             else{ 
                
                 anterior_eny->prox = aux_eny->prox;
                 free(aux_eny);
                 aux_eny = anterior_eny->prox;                 
                 ini -=1;
                }
       
       }
       
       if(teste == 3){

                
             if(aux_explo == inicio_explo){
                 inicio_explo = inicio_explo->prox;          
                 free(aux_explo);
                 aux_explo = inicio_explo;                 
                }
                
             else if (aux_explo == fim_explo){
                
                anterior_explo->prox = NULL;          
                fim_explo = anterior_explo;
                free(aux_explo);
                aux_explo = NULL;
                }
                
             else{ 
                
                 anterior_explo->prox = aux_explo->prox;
                 free(aux_explo);
                 aux_explo = anterior_explo->prox;                 
                }
                
       
       }
       
       
        if(teste == 4){

                
             if(aux_boos_shot == inicio_boos_shot){
                 inicio_boos_shot = inicio_boos_shot->prox;          
                 free(aux_boos_shot);
                 aux_boos_shot = inicio_boos_shot;  
                 bti -=1;               
                }
                
             else if (aux_boos_shot == fim_boos_shot){
                
                anterior_boos_shot->prox = NULL;          
                fim_boos_shot = anterior_boos_shot;
                free(aux_boos_shot);
                aux_boos_shot = NULL;
                bti -=1;       
                }
                
             else{ 
                
                 anterior_boos_shot->prox = aux_boos_shot->prox;
                 free(aux_boos_shot);
                 aux_boos_shot = anterior_boos_shot->prox;     
                 bti -=1;                   
                }
                
       
       }
       
       
      
}    
