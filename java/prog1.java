public class prog1 {
    public static void main(String[] args) {
        b subob=new b();
        subob.seij(4,5);
        subob.sum();
        System.out.println("the som is "+subob.total);
    }
    
    
    
}
class a{
    int i;
    private  int j;
    void seij(int x, int y)
    {
        i=x;
        j=y;
        int a=j;
    }

}
class b extends a
{
        int total;
        void sum()
        {
            total=i+a;
        }
}