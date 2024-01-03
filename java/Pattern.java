public class Pattern {
    public static void main(String[] args) {
        int k=1,s=15,x=8;
        for(int n=1;n<=5;n++){
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=15;j++)
            {
                if(j==k||j==s)
                System.out.print('w');
                else
                 System.out.print(' ');
            }
            System.out.print(' ');
        }
        k++;
        s--;
        System.out.println();
        
    }
}
}  

