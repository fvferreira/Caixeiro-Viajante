# 🧭 Problema do Caixeiro Viajante
Este projeto implementa uma solução para o clássico **Problema do Caixeiro Viajante**, utilizando uma abordagem por **força bruta**, e apresenta também uma alternativa mais eficiente baseada no **algoritmo do Vizinho Mais Próximo (Nearest Neighbor)**.

---

## 📌 Objetivo

Encontrar a menor rota possível que:
- Visite todas as cidades exatamente uma vez;
- Retorne à cidade de origem;
- E apresente a menor distância total.

---

## 🧠 Estrutura do Projeto

- `codigo.c`: Código principal que calcula todas as permutações possíveis de rotas e identifica a menor distância.
- `Relatorio_Prtica_2_Unidade_Lab.Algoritmos_2.pdf`: Documento explicativo com análise da solução implementada e de uma abordagem mais otimizada.

---

## 🧮 Cidades Usadas

As posições das cidades são fixas, com coordenadas 2D:

```
Cidade 0: (0, 0)
Cidade 1: (2, 3)
Cidade 2: (5, 4)
Cidade 3: (1, 1)
Cidade 4: (6, 2)
Cidade 5: (3, 7)
Cidade 6: (8, 1)
Cidade 7: (4, 6)
Cidade 8: (7, 3)
Cidade 9: (2, 5)
```

---

## 🧾 Como Funciona a Solução por Força Bruta

1. Gera todas as rotas possíveis iniciando e terminando na **cidade 0**.
2. Calcula a **distância total** de cada rota usando a fórmula da distância euclidiana.
3. Imprime cada rota com sua respectiva distância.
4. Ao final, mostra a **melhor rota (menor distância)**.

> Essa abordagem garante a **melhor solução possível**, porém com complexidade **O(n!)**, sendo inviável para grandes quantidades de cidades.

---
## 📄 Arquivos

- `codigo.c`: Código-fonte com força bruta.
- `Relatorio_Prtica_2_Unidade_Lab.Algoritmos_2.pdf`: Relatório explicativo com alternativas otimizadas.

---

## 🧠 Conclusão

O projeto demonstra a diferença entre uma solução **exata** (força bruta) e uma **heurística eficiente** (vizinho mais próximo), sendo ideal para estudar as aplicações de algoritmos em problemas de otimização clássicos.
