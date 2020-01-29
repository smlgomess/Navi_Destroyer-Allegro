void free_all(){

          aux_shot = inicio_shot;

          while(aux_shot != NULL){

              inicio_shot = inicio_shot->prox;
              free(aux_shot);
              aux_shot = inicio_shot;

          }


          aux_eny = inicio_eny;

          while(aux_eny != NULL){

              inicio_eny = inicio_eny->prox;              
              free(aux_eny);
              aux_eny = inicio_eny;

          }
          
          
          aux_explo = inicio_explo;

          while(aux_explo != NULL){

              inicio_explo = inicio_explo->prox;              
              free(aux_explo);
              aux_explo = inicio_explo;

          }
          
          if(aux_dangers != NULL)
          free(aux_dangers);
          
          
          aux_boos_shot = inicio_boos_shot;
          
          
          while(aux_boos_shot != NULL){

              inicio_boos_shot = inicio_boos_shot->prox;              
              free(aux_boos_shot);
              aux_boos_shot = inicio_boos_shot;

          }
                
          
          
          
}
