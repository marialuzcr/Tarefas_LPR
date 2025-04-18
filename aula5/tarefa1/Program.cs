using System;

class Program
{
    static void Main()
    {
        Console.ForegroundColor = ConsoleColor.DarkRed;
        Console.Write("------------------\n");
        Console.Write("      tarefa1     \n");
        Console.Write("----------------- \n");
         Console.ForegroundColor = ConsoleColor.Yellow;
        Console.Write("Quantos números serão digitados?\n ");
        int quantidade = int.Parse(Console.ReadLine());

        int contador = 0;
        int soma = 0;
        int quant = 0;

        while (contador < quantidade)
        {
            Console.Write($"Digite o {contador + 1}º número: ");
            int numero = int.Parse(Console.ReadLine());

            if (numero % 2 == 0) 
            {
                soma += numero;
                quant++;
            }
          contador++;
        }
        if (quant > 0)
        {
            double media = (double)soma / quant;
             Console.ForegroundColor = ConsoleColor.DarkBlue;
            Console.WriteLine($"A média dos números pares é: {media:F2}");
        }
        else
        {
             Console.ForegroundColor = ConsoleColor.DarkBlue;
            Console.WriteLine("Nenhum número par foi digitado.");
        }
    }
}

