class ThrowDemo {
    public static void main(String[] args) {
        int x=2,y=0;
        try
        {
            if(y==0)
            {
            throw new ArithmeticException();
            }
        
        catch(ArithmeticException e)
        {
            System.out.println("Exception occured:division by 0"+e);
        }
    }     
}
}
