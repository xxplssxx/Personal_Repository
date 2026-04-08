import pandas as pd
import numpy as np
import sklearn as sk

df = pd.read_csv("dadoshahaha/world_happiness_report_2015.csv")
print("Esse é o head:\n")
print(df.head())
print("Esse é o tail:\n")
print(df.tail())
print("Essas são as informações:\n")
print(df.info())
print("Essas são as colunas:\n")
print(df.columns)
df.columns = ['Country', 'Region', 'rank_felicidade', 'score_felicidade',
       'Standard Error', 'Economy (GDP per Capita)', 'Family',
       'Health (Life Expectancy)', 'Freedom', 'Trust (Government Corruption)',
       'Generosity', 'Dystopia Residual']
