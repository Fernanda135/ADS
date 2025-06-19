alunos = {
    "Ana": 8.5,
    "Breno": 7.0,
    "Carlos": 9.2,
    "Daniela": 6.5
}

print("Alunos e notas:")
for aluno, nota in alunos.items():
    print(f"- {aluno}: {nota}")

aluno_para_remover = input("Digite o nome do aluno que deseja remover: ")

if aluno_para_remover in alunos:
    del alunos[aluno_para_remover]
    print(f"Aluno '{aluno_para_remover}' removido com sucesso!")
else:
    print("Aluno não encontrado no dicionário.")

print("\nDicionário de alunos atualizado:")
for aluno, nota in alunos.items():
    print(f"- {aluno}: {nota}")
