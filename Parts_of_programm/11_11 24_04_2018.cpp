//Что я делал в фев - марте месяце


        for(int j = 0; j <= 5; ){
                  
                if( B[i] == C[j] ){
                           
                    for( int l = 0; l <= 9; ){
                               
                         if( U[l] != ( B[i] && C[j] ) ){ 
                             cout<<U[l]<<" ";
                             l++;
                                                        }
                      	 else l++;
             
                                              } 
                                   }
	         else j++;
                                 }  
                                 }
 
  //  case '2':
        for( int i = 0; i <= 5; ){
        
             for( int j = 0; j <= 5; ){
                  if(j >= 5) i++; 
             
             for( int l = 0; l <= 9; l++ ){
             	
                 if( U[l] != (A[i] != C[j])  ){
                     cout<<U[i]<<" ";
                     l++;
                     }
				 else l++; 
			}
		         j++;
		} 
//	}
//if( U[l] != B[i] && C[j]) cout<<U[l];
        
             
             
//default: printf("ERROR:Dopustimie znachenia ot 1 do 5");
}
	
	cout<<"1";

