### ATIVIDADE AVALIATIVA - Minicurso VSCode

> O que deve ser feito?

A atividade avaliativa consistirá em clonar o repositório https://github.com/SamSteffler/minicursoVSCode-git.git, navegar até a pasta "atividade avaliativa" e criar uma pasta com seu nome completo.

> Nome da pasta: ```nome_do(s)_aluno(s)_avaliacao```
- Pode colocar o nome completo como comentário no arquivo, caso ficar extenso

A pasta deverá conter o arquivo da atividade.

> Nome do arquivo: ```nome_sobrenome.(c/cpp/py/java)``` ou ```nome_nome2.(c/cpp/py/java)``` 

Esse programa deverá ser em C, Python ou Java e receberá dois valores como argumentos, imprimindo:
- a soma
- a diferença entre o maior e o menor
- a média
- e o resto da divisão entre o maior e o menor. 

A entrega é até o dia 29/03 (domingo) e contará para a certificação. O envio será feito da seguinte maneira:

- **Instalar GitHub Actions e GitHub Pull Requests** pela aba de extensões
- Realizar um commit com a mensagem "Atividade Avaliativa - nome_sobrenome" e enviar o código
- Sincronizar - ao sincronizar, aparecerá um erro e a opção de criar um fork/bifurcação do repositório, clicar nessa opção e criar o fork
- Criar um pull request - após criar o fork, clicar na opção de criar um pull request e enviar o código
  - Pull request será de <seu_nome>/main para SamSteffler/main, ou seja, do seu repositório para o repositório do professor
  
Para o caso de duplas com acesso a dois computadores no laboratório, realizar pull request enquanto usa Live Share (para ambos aparecerem no pull request).

Exemplo de como o diretório ficará após o pull request:
```plaintext
minicursovscode-git/
 |- exemplo1.txt
 |- exemplo2.txt
 |- exemplo3.txt
 |- README.md
 |- atividade avaliativa/
     |- README.md                   *** vc esta aqui ***
     |- samuel_steffler_avaliacao/  <- pasta exemplo
         |- main.cpp                <- arquivo de exemplo com entrada de argumentos pela linha de comando
     |- nome_sobrenome_avaliacao/   <- SUA PASTA
         |- nome_sobrenome.c        <- SEU ARQUIVO FONTE
     
```

- Quaisquer dúvidas, favor enviar um email para samuel.steffler@acad.ufsm.br.