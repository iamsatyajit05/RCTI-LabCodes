import pandas as pd
import matplotlib.pyplot as plt

stock_data = pd.read_csv('pr8/TSLA.csv')

stock_frame = pd.DataFrame(stock_data)
stock_frame = stock_frame.drop(['High'], axis=1)
stock_frame = stock_frame.drop(['Low'], axis=1)
stock_frame = stock_frame.drop(['Adj Close'], axis=1)
stock_frame = stock_frame.drop(['Volume'], axis=1)
stock_frame['Date'] = stock_frame['Date'].str.replace('2023-', '')

print(stock_frame)

ax = plt.gca()
plt.title('Telsa Stock Price Chart (11 Sep 2023 to 21 Sep 2023)')
plt.ylabel('Price (in USD)')

stock_frame.plot(x='Date', y='Open', ax=ax)
stock_frame.plot(x='Date', y='Close', ax=ax)