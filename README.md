 <h1 align="center">ft_printf()</h1>

<div id="header" align="center">
  <img src="https://media.giphy.com/media/QXJd9XVrgJuDFhhcOX/giphy.gif" width="200"/>
</div>

This repository contains all files for the __ft_printf__ project from the School 42 cursus. The goal is to recreate the behavior of the original [`printf()`](https://en.wikipedia.org/wiki/Printf_format_string) function from the C Standard Library.

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#features">Features</a>
	<span> · </span>
	<a href="#compilation">Compilation</a>

</h2>

<hr>

<h2 id="about">📌 About</h2>

The purpose of this project is to implement a simplified version of the C `printf()` function. The project focuses on formatted output without the use of external formatting functions.

The implementation supports:
<ul>
  <li>Characters (`%c`)</li>
  <li>Strings (`%s`)</li>
  <li>Signed integers (`%d`, `%i`)</li>
  <li>Unsigned integers (`%u`)</li>
  <li>Hexadecimal representation (lowercase `%x`, uppercase `%X`)</li>
  <li>Pointer addresses (`%p`)</li>
  <li>Percentage symbol (`%%`)</li>
</ul>

<hr>

<h2 id="features">🧩 Features</h2>

<ul>
  <li>Handles a variable number of arguments using <code>&lt;stdarg.h&gt;</code></li>
  <li>Returns the number of characters printed (just like the original <code>printf</code>)</li>
  <li>Formatted output for multiple data types</li>
  <li>Custom implementation with no use of standard formatting functions</li>
</ul>

<hr>

<h2 id="compilation">🛠️ Compilation</h2>

To compile the project, navigate to the directory and run:

```bash
make
