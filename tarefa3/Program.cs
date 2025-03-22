
string classe;

Console.ForegroundColor = ConsoleColor.DarkBlue;
Console.WriteLine("---------------");
Console.WriteLine("|  tarefa3    |");
Console.WriteLine("---------------");
Console.ResetColor();
Console.ForegroundColor = ConsoleColor.Green;
Console.ResetColor();

Console.ForegroundColor = ConsoleColor.Cyan;
Console.WriteLine("escolha seu personagem entre:\n guerreira\n  mago\n arqueira\n");
Console.ResetColor();

classe =  Console.ReadLine();;
switch (classe) 
{
 case "guerreira":
 Console.ForegroundColor = ConsoleColor.DarkGreen;
 Console.WriteLine("seus poderes são: ataque pesado, defesa total");
 break;
 
 case "mago":
 Console.ForegroundColor = ConsoleColor.DarkMagenta;
 Console.WriteLine("seus poderes são: Bola de Fogo, Escudo de Gelo ");
 break;

 case "arqueira":
 Console.ForegroundColor = ConsoleColor.Gray;
 Console.WriteLine("seus poderes são: Flecha Precisa, Disparo Triplo");
 break;

    default:
    Console.WriteLine("nada foi indentificao");
 break;
}
