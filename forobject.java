package javaapplication10;


public class forobject {
    private int hour;
    private int minute;
    private int seconds;
    

 
public forobject(){
    this(0,0,0);
}
public forobject(int h){
this(h,0,0);
}
public forobject(int h,int m){
this(h,m,0);
}
public forobject(int h,int m,int s){
    setTime( h,m,s);
}
public void setTime(int h,int m,int s){
    sethour(h);
    setminute(m);
    setsecond(s);
}


public void sethour(int h){
    hour=((h>=0&&h<=24)?h:0);
    
}

        public void setminute(int m){
    minute=((m>=0&&m<=60)?m:0);
        }
    public void setsecond(int s){
        seconds =((s>=0&&s<=60)?s:0);
    }
    
    public int gethour(int h){
        return hour;
    }
    public int getminute(int m){
        return minute;
    }
    public int getsecond(int s){
        return seconds;
    }
    public String toMilitary(){
        return String.format("%d:%d:%d",hour,minute,seconds);
    }
    public static void main (String []args){
   
    forobject getset = new forobject (16);
        forobject getset1 = new forobject (16,15); 
        forobject getset2 = new forobject (16,15,20);
       
        System.out.printf("%s\n", getset.toMilitary());
        System.out.printf("%s\n", getset1.toMilitary());
        System.out.printf("%s\n", getset2.toMilitary());
    
    }
}
        
        
        
        
        
        
       