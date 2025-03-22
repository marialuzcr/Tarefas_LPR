int x;
Console.ForegroundColor = ConsoleColor.Yellow ;
Console.WriteLine("--------------");
Console.WriteLine("   tarefa 1   ");
Console.WriteLine("--------------");
Console.WriteLine("digite um numero");
Console.ResetColor();
Console.ForegroundColor = ConsoleColor.Green;
Console.ResetColor();

x= Convert.ToInt32(Console.ReadLine());

if(x%2==0)
{
    Console.ForegroundColor = ConsoleColor.Green; 
    Console.WriteLine("seu numero é par ");
}
else{
     Console.ForegroundColor = ConsoleColor.DarkRed; 
     Console.WriteLine("seu numero é impar ");
}
 Console.ResetColor(); 