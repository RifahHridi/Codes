
public class practwo {
    //i want to swap two rows the first and the last row
   public static void main (String[] args){
    int m[][]={{1,2,3,4},
              {1,2,3,4},
              {1,2,3,4},
              {1,2,3,4}};
    int i = 0;
    int temp= m[0][i];
    m[0][i]= m[m.length-1][i];
    m[m.length-1][i]= temp;
    
    for ( i=0;i<m.length;i++){
        for(int j=0;j<m[0].length;j++){
            System.out.println(+i+j);
        }
    }
     }
       

}

