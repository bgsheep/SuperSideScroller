# SuperSideScroller
2D横板动作游戏
# 游戏介绍
基于UE5第三人称模板开发，是一款横板动作游戏。地图中存在来回移动的AI敌人，与用户角色发生碰撞会对其造成伤害，用户角色可以发射火球摧毁敌人，并且可以收集地图中的金币以及药品，收集药品后短时间内获得移动速度提升和跳跃能力提升。
# 游戏截图
![pho1](https://github.com/bgsheep/SuperSideScroller/blob/main/demos/screen%20shot%201.png)
![pho2](https://github.com/bgsheep/SuperSideScroller/blob/main/demos/screen%20shot%202.png)
![pho3](https://github.com/bgsheep/SuperSideScroller/blob/main/demos/screen%20shot%203.png)
# 实现功能
1. 创建混合空间、动画蓝图和动画状态机完成用户角色空闲、行走、冲刺和跳跃的动画过渡；
2. 完成用户角色类的实现，包括为角色添加增强型输入的冲刺、投掷动作；
3. 为用户角色的投掷动画创建动画蒙太奇，并使用动画通知实现投掷物的生成；
4. 创建敌人角色类，分配AI控制器并实现敌人的人工智能逻辑，使敌人会随机在巡逻点直接移动；
5. 为投掷物碰撞、敌人死亡与投掷动作添加视觉特效和音频特效；
6. 创建收集品类，实现拾取效果与收集品计时刷新效果，并添加金币计数器UI到屏幕；
7. 实现用户拾取药剂的能力升级行为逻辑；
# 游戏演示
![video1](https://github.com/bgsheep/SuperSideScroller/blob/main/demos/demo1.gif)
![video2](https://github.com/bgsheep/SuperSideScroller/blob/main/demos/demo2.gif)
