import java.util.Scanner;
import java.io.File;
import java.util.Hashtable;

class Count1
{
  public static void main(String[] args)
  {
    try { // buna karsi gelen parantez asagida mavi
	
	  Hashtable<String,Integer>  wordFreqHashtable =  new Hashtable<String,Integer>();
	  Scanner fileReader;
	  for(int fileID=0; fileID<51; fileID++)
	  {
	    File inputFile;
	    String fileName = "NonSpamTrain" + fileID + ".txt";
	    System.out.println(fileName);
		inputFile       = new File(fileName);
		fileReader      = new Scanner(inputFile); 
		while( fileReader.hasNext() )
		{
            String token = fileReader.next(); // returns the data in the scanner

			tokens.useDelimiter(" ");
		  if( wordFreqHashtable.containsKey(token.toLowerCase()) )
		  { // true
		    wordFreqHashtable.put(token.toLowerCase(), wordFreqHashtable.get(token.toLowerCase())+1);
		  }
		  else
		  { // not in the table yet!
		    wordFreqHashtable.put(token.toLowerCase(), 1);
		  }
		  // how i will scan the elements in the hastable
		  System.out.println(token.next());
    }
		  
		  // scan all the elements in the hastable
		   
    for (String key : wordFreqHashtable.keySet())
    {
         if( wordFreqHashtable.get(key) > 25)
               
     System.out.println(" key: " + key + " value: " + wordFreqHashtable.get(key));
	
	}
}
	

	Catch(Exception exception)
	{
	  System.out.println(exception.getMessage());
	}
  }// yukariya karsi gelen parantez
}