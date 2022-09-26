import discord
from discord.ext import commands
bot = commands.Bot(command_prefix='!!') #กำหนด Prefix
@bot.event
async def on_ready() : #เมื่อระบบพร้อมใช้งาน
    print("Bot Started!") #แสดงผลใน CMD
@bot.event
async def on_message(message) :
    await bot.process_commands(message)
        
@bot.command()
async def love(ctx) :
    await ctx.send('WoW , really !? i cant blieve it because u look so flirtatious')

@bot.command()
async def hey(ctx) :
    await ctx.send('Hi Hi ,Did u have a nice day ?')
    
@bot.command()
async def no(ctx) :
    await ctx.send("OH ,I'm hoping it gets better soon.")

@bot.command()
async def yes(ctx) :
    await ctx.send("That's great.")

bot.run('OTE1MzcyNTU2NTE5ODk5MTM2.YaapIA.kWQdH1oVVCwGxlRf3xwmisCotac') #รันบอท 