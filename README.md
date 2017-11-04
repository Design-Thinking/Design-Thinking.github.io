# Insomnia Killer
This repository is for the homepage of Insomnia Killern in Design Thinking course starting from 2017 fall.

![](https://github.com/Design-Thinking/Design-Thinking.github.io/blob/master/img/Read_me_home.jpg)

所有的文档请在_pose文件夹中编写，所需要的图片资源放在img文件夹中。采用和wiki中一样的Markdown语言，文件编写的具体例子如下：

>\---
>
>layout: post
>
>title:  "Welcome to Jekyll!"
>
>date:   2014-01-27 21:57:11
>
>categories: jekyll update
>
>\---

>You'll find this post in your `_posts` directory - edit this post and re-build (or run with the `-w` switch) to see your changes!
>
>To add new posts, simply add a file in the `_posts` directory that follows the convention: YYYY-MM-DD-name-of-post.ext.
>
>Jekyll also offers powerful support for code snippets:



>{% highlight ruby %}#以下内容高亮显示
>
>def print_hi(name)
>
>  puts "Hi, #{name}"
>  
>end
>print_hi('Tom')
>
>#=> prints 'Hi, Tom' to STDOUT.
>
>{% endhighlight %}


---

Check out the [Jekyll docs][jekyll] for more info on how to get the most out of Jekyll. File all bugs/feature requests at [Jekyll's GitHub repo][jekyll-gh].

[jekyll-gh]: https://github.com/mojombo/jekyll

[jekyll]:    http://jekyllrb.com

---

可以看到在博文的最上方有被两个---包裹起来的一段，这里就定义了文章的一些参数，更多参数在[标题信息](http://jekyll.com.cn/docs/frontmatter/)和[常用变量](http://jekyll.com.cn/docs/variables/)获取，简单的只需要关注几个就好：

1. title：文章的标题

2. date：文章的日期

3. categories：定义了文章所属的目录，一个list，将会根据这个目录的list来创建目录并将文章html放在生成的目录下，文章分类时候用，这里就不使用了

4. layout：文章所使用的模板名称，也就是_layouts中定义的模板的文件名去掉.html

5. tags：例子中没有，定义了文章的标签，也是一个list，文章分类时候用，这里就不使用了

[Markdown语法教程](http://www.jianshu.com/p/075d7cac8fef)

