using System;

class Heroi
{
    public string Nome;
    public string Poder;
    public int Pontuacao;
}

class Programa
{
    static void Main(string[] args)
    {
        Heroi[] herois = new Heroi[5];
        int quantidadeCadastrada = 0;

        Console.WriteLine("=== Cadastro de Heróis da Marvel ===");
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine($"\nCadastro do herói #{i + 1}:");
            herois[i] = CadastrarHeroi();
            quantidadeCadastrada++;

            Console.Write("Deseja cadastrar outro herói? (s/n): ");
            string resposta = Console.ReadLine().ToLower();
            if (resposta != "s") break;
        }

        SelecionarEquipe(herois, quantidadeCadastrada);
    }

    static Heroi CadastrarHeroi()
    {
        Heroi heroi = new Heroi();

        Console.Write("Nome do herói: ");
        heroi.Nome = Console.ReadLine();

        Console.Write("Poder do herói: ");
        heroi.Poder = Console.ReadLine();

        Console.Write("Pontuação do herói: ");
        while (!int.TryParse(Console.ReadLine(), out heroi.Pontuacao))
        {
            Console.Write("Digite um valor numérico válido: ");
        }

        return heroi;
    }

    static void SelecionarEquipe(Heroi[] herois, int totalCadastrados)
    {
        Console.WriteLine("\n=== Seleção de Equipe ===");
        for (int i = 0; i < totalCadastrados; i++)
        {
            Console.WriteLine($"{i + 1}. {herois[i].Nome} - Poder: {herois[i].Poder} - Pontuação: {herois[i].Pontuacao}");
        }

        Heroi[] equipe = new Heroi[3];
        for (int i = 0; i < 3; i++)
        {
            Console.Write($"\nSelecione o herói #{i + 1} (1 a {totalCadastrados}): ");
            int escolha;

            while (!int.TryParse(Console.ReadLine(), out escolha) || escolha < 1 || escolha > totalCadastrados)
            {
                Console.Write("Escolha inválida. Tente novamente: ");
            }

            equipe[i] = herois[escolha - 1];
        }

        Console.WriteLine("\n=== Equipe Selecionada ===");
        for (int i = 0; i < 3; i++)
        {
            Console.WriteLine($"{i + 1}. {equipe[i].Nome} - Poder: {equipe[i].Poder} - Pontuação: {equipe[i].Pontuacao}");
        }
    }
}
