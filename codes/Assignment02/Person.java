class Person
{
  protected String firstname;
  private String lastName;
  private String SSN;
  public Person(String firstname, String lastName, String SSN) // (paremeters)
  { // this refers to the current class file
    this.firstname = firstname; // second part- instances
	this.lastName  = lastName;
	this.SSN       = SSN;
  }
}