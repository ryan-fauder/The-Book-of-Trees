# Heap

## Importância

Uma estrutura de dados bastante útil quando é nessário inserir e remover elementos de tal modo que se mantenha uma ordenação.
Em um heap, pode-se ordenar os elementos armazenados em ordem crescente ou decrescente e; a cada operação de inserção ou remoção mantém-se a forma da estrutura.

## Definição

Uma árvore binária será considerada um heap se e somente se:
- Estiver vazia; ou
- O valor armazenado na raiz é o maior ou o menor entre seus filhos e; as subávores obedecem a mesma regra de ordenação da raiz da árvore.

## Alguns conceitos

Dado um elemento no vetor do Heap com índice i, então:
- Se ele não for a raiz, o pai dele estará no indíce: floor((i - 1) / 2);
- Se ele tiver filhos, então seus filhos serão:
  - Filho da esquerda estará em: 2i + 1;
  - Filho da direita estará em 2i + 2;