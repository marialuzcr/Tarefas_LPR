using System;

class Program
{
    static void Main()
    {

string classe;

Console.ForegroundColor = ConsoleColor.DarkBlue;
Console.WriteLine("---------------");
Console.WriteLine("|  tarefa3    |");
Console.WriteLine("---------------");
Console.ResetColor();
Console.ForegroundColor = ConsoleColor.Green;
Console.ResetColor();

Console.ForegroundColor = ConsoleColor.Cyan;
Console.WriteLine("escolha seu personagem entre:\n Guerreiro\n  Mago\n Arqueiro\n");
Console.ResetColor();

classe = Console.ReadLine(); 
switch (classe)
{
    case "Guerreiro":
         Console.ForegroundColor = ConsoleColor.DarkGreen;
        Console.WriteLine("\nClasse: Guerreiro");
        Console.WriteLine("Habilidades:");
        Console.WriteLine("Ataque Pesado");
        Console.WriteLine("Defesa Total");
        break;
    case "Mago":
        Console.ForegroundColor = ConsoleColor.DarkMagenta;
        Console.WriteLine("\nClasse: Mago");
        Console.WriteLine("Habilidades:");
        Console.WriteLine("Bola de Fogo");
        Console.WriteLine("Escudo de Gelo");
        break;
    case "Arqueiro":
    Console.ForegroundColor = ConsoleColor.Gray;
        Console.WriteLine("\nClasse: Arqueiro");
        Console.WriteLine("Habilidades:");
        Console.WriteLine("Flecha Precisa");
        Console.WriteLine("Disparo Triplo");
        break;
    default:
        Console.ForegroundColor = ConsoleColor.Red;
        Console.WriteLine("nada foi indentificado");
        break;
}
Console.ResetColor();
}
}
