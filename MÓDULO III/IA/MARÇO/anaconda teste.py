import pandas as pd
import numpy as np
import sklearn as sk

df = pd.read_csv("/home/pedrolucas/ADS/Personal_Repository/MÓDULO III/IA/MARÇO/dadoshahaha/world_happiness_report_2015.csv")
print("Esse é o head:\n")
print(df.head())
print("Esse é o tail:\n")
print(df.tail())
print("Essas são as informações:\n")
print(df.info())
print("Essas são as colunas:\n")
print(df.columns)
df.columns = ['Country', 'Region', 'rank_felicidade', 'score_felicidade',
       'Standard Error', 'PIB', 'Family',
       'expectativa_vida', 'Freedom', 'Trust (Government Corruption)',
       'Generosity', 'Dystopia Residual']
print("A média da expectativa de vida é: ", (df['expectativa_vida'].mean()))
print("A mediana da expectativa de vida é: ", (df['expectativa_vida'].median()))
print("O PIB máximo foi: ", (df['PIB'].max()))
print("Atividade II:\n")

print("Questão 1:\n")
print(df.loc[: ,['Country', 'Region', 'Family', 'Freedom']])

print("Questão 2:\n")
print(df.iloc[: ,[0, 1 , 6, 8]])

print("Questão 3:\n")
print(df.loc[0:14, ['Country', 'PIB']])

print("Questão 4:\n")
print(df.iloc[0:15 ,[0, 5]])

print("Questão 5:\n")
print(df.loc[df.score_felicidade>5])

print("Questão 6:\n")
print(df.loc[df.Region=='Southern Asia'])

ultima_coluna = df.iloc[:, -1]

print(ultima_coluna)
