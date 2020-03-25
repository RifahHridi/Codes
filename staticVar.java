
package javaapplication10;


public class staticVar {
    private String first;
    private String last;
    public static int members=0;
    
    
    
    public staticVar(String fn,String ln){
        first = fn;
        last= ln;
        members++;
        System.out.printf("name %s %s , members in club ",first,last,members);
        
    }
    
    
    
    
    
    
    
}
