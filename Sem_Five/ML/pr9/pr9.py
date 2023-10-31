import pandas as pd
import matplotlib.pyplot as plt

stock_data = pd.read_csv('pr9/TSLA.csv')

stock_frame = pd.DataFrame(stock_data)
stock_frame['Date'] = stock_frame['Date'].str.replace('2023-', '')

print(stock_frame)

ax = plt.gca()
plt.title('Telsa Stock Price Chart (11 Sep 2023 to 21 Sep 2023)')
plt.ylabel('Price (in USD)')

stock_frame.plot(x='Date', y='Open', ax=ax)
stock_frame.plot(x='Date', y='Close', ax=ax)
stock_frame.plot(x='Date', y='High', ax=ax)
stock_frame.plot(x='Date', y='Low', ax=ax)
stock_frame.plot(x='Date', y='Adj Close', ax=ax)    

stock_frame = pd.DataFrame(stock_data)
ax = plt.gca()
plt.title('Telsa Stock Volume Chart')
plt.ylabel('Volume (in x100M USD)')

stock_frame.plot(x='Date',y='Volume',ax=ax)