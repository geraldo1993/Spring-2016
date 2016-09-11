

class Question2
{
  public static void main(String[] arg)
  {
	try
	{
	  int number = 1/0;
       System.out.println("to be");
	}
	catch(Exception exception)
	{
	  System.out.println("or not to be");
	}
	finally
	{
	  System.out.println("that is the question");
	}
  }
}
