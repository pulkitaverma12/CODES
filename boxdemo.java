class box{
    public
    int length1;
    int breadth1;
    int heigth1;
    int length2;
    int breadth2;
    int heigth2;
    box()
    {
        length1=10;
        breadth1=20;
        heigth1=15;
        length2=3;
        breadth2=6;
        heigth2=9;
    }
    void vol()
    {
        System.out.println("volume is:"+length1*breadth1*heigth1);
        System.out.println("volume is:"+length2*breadth2*heigth2);
    }

public class boxdemo 
{
    public static void main(String[] args) {
        //System.out.println("system out");
        box b1=new box();
        b1.vol();
        box b2=new box();
        b2.vol();
    }
}
}
