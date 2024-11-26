<!--Introduction to OOP-->
<!DOCTYPE html>
<html>
    <body>

    <p>
    <?php
    // Create the class
    class Person{
        // Create Properties-(Variables tied to objects)
        public $firstname;
        public $lastname;
        public $age;

        //Assigning values to the property variables
        public function __construct($firstname, $lastname, $age)
        {
            $this->firstname=$firstname;
            $this->lastname=$lastname;
            $this->age=$age;

        }

        //Create a method (Function tied to an object)
        public function hello(){
            return "I am ".$this->firstname." ".$this->lastname.", my age is:" .$this->age."";

        }

    }
    // Creating a new person named "John Smith" who is 25 years old
    $person1=new Person('John','Smith', 25);
    $person2=new Person('Joe','Bob', 35);

    // Print out what the hello method returns
    echo $person1->hello();
    echo "<br>";
    echo $person2->hello();
    echo "<hr/>";

    // PHP Strings func

    // word count
    echo str_word_count("Hello World!");
    echo "<hr/>";

    //reverse words
    echo strrev("Hello World!");
    echo "<hr/>";
    // search for text inside a string
    echo strpos("Hello World!","World");
    echo "<hr/>";

    // replace text inside a string
    echo str_replace("world","John","Hello world!");
    echo "<hr/>";

    // PHP constant
    // case-sensitive
    define("WELCOME","Hello, my name is Dipti Agarwal");
    echo WELCOME;
    echo "<hr/>";

    // case-insensitive
    define("WELCOME2","Hello, my name is Ayushi Agarwal",true);
    echo Welcome2;
    echo "<hr/>";

    // constants are global
    define("CAR","VOLVO");

    function mycar()
    {
        echo CAR;
    }
    mycar();

    ?>
</p>
</body>
</html>