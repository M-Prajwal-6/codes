class Mypoint{
    int x,y;
    Mypoint(){
        x=0;
        y=0;
    }
    Mypoint(int x, int y){
        this.x=x;
        this.y=x;
    }
    void setxy(int x, int y){
        this.x=x;
        this.y=y;
    }
    int[] getxy(){
        int a[]=new int[2];
        a[0]=x;
        a[1]=y;
        return a;
    }
    public String toString(){
        return "("+x+","+y+")";
    }
    double distance(int x,int y){
        return Math.sqrt(Math.pow(this.x-x,2)+Math.pow(this.y-y,2));
    }
    double distance(){
        return Math.sqrt(Math.pow(this.x,2)+Math.pow(this.y,2));
    }
    double distance(Mypoint P2){
        return Math.sqrt(Math.pow(this.x=P2.x,2)+Math.pow(this.y=P2.y,2));
    }
}
public class TestMyPoint {
    public static void main(String[] args) {
        Mypoint P1= new Mypoint();
        Mypoint P2= new Mypoint(10,20);
        int a[]=P1.getxy();
        System.out.println("P1 X= "+a[0]+"\nP1 Y="+a[1]);
        P1.setxy(5, 6);
        System.out.println("Point P1=");
        System.out.println(P1);
        System.out.println("Point P2");
        System.out.println(P2);

        System.out.println("Distance b/t point P1 and (2,3): "+P1.distance(2,3));
        System.out.println("Distance b/t P1 and origin: "+P1.distance());
        System.out.println("Distance b/t P1 and P2: "+P1.distance(P2));
    }

}