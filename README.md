# Análise de Idade e Gênero em C com Persistência de Dados

## Descrição
Este projeto em C implementa um programa que analisa informações sobre idade e gênero de um grupo de pessoas. O programa determina a maior idade, conta a quantidade de indivíduos masculinos e femininos, e salva esses dados em um arquivo para persistência entre execuções.

## Funcionalidades
- **Entrada de Dados**: O usuário pode inserir o número de pessoas, seguido por suas informações (sexo, nome e idade).
- **Cálculo da Maior Idade**: Determina a maior idade entre os indivíduos inseridos.
- **Contagem por Gênero**: Conta quantos indivíduos são do sexo masculino e quantos do sexo feminino.
- **Persistência de Dados**: Salva os resultados (maior idade, quantidade de homens e mulheres) em um arquivo para que possam ser recuperados em execuções futuras.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o analise_genero analise_genero.c
   ```
2. Execute o programa:
   ```bash
   ./analise_genero
   ```
3. Insira o número de pessoas e, para cada pessoa, insira o sexo (M/F), nome e idade. O programa exibirá a maior idade, a quantidade de homens e a quantidade de mulheres, e salvará essas informações em um arquivo para uso posterior.

## Exemplo de Uso
Ao executar o programa, o usuário será solicitado a inserir os dados:
```plaintext
Elementos analisados: 3
1 componente(modelo sexo, nome e idade)
M João 25
2 componente(modelo sexo, nome e idade)
F Maria 30
3 componente(modelo sexo, nome e idade)
M Pedro 22

Maior idade: 30
Quantidade de Homens: 2
Quantidade de Mulheres: 1
```

## Estrutura de Dados
- **sexo**: Um array de caracteres que armazena o gênero de cada pessoa.
- **nome**: Um array de strings que armazena o nome de cada pessoa.
- **idade**: Um array de inteiros que armazena a idade de cada pessoa.
- **MaiorIdade**: Um inteiro que armazena a maior idade entre as pessoas inseridas.
- **Masculino**: Um contador de indivíduos do sexo masculino.
- **Feminino**: Um contador de indivíduos do sexo feminino.

## Funções Principais
- **leitorDoArquivo()**: Carrega os dados salvos anteriormente a partir de um arquivo.
- **salvarEmArquivo()**: Salva os dados atuais (maior idade, quantidade de homens e mulheres) em um arquivo para persistência.
- **main()**: Função principal que gerencia a entrada de dados, análise e chamada das funções de persistência.

## Persistência de Dados
Os dados de maior idade, quantidade de homens e quantidade de mulheres são salvos em um arquivo chamado `TesteAnterior.txt`, que é carregado automaticamente ao iniciar o programa, garantindo que as informações sejam preservadas entre as execuções.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
