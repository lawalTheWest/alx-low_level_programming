<h1> Static Libraries </h1>

Creating A Static "C" Library Using `ar` and `ranlib`

<em> ar rc libutil.a util_file.o </em>

The command above is used to create or update a static library archive named `libutil.a` with the object files `util_file.o`. Here's a breakdown of the command:

`ar` is the archive utility command used to create, modify, and extract files from archives.

`rc` are the options / flags passed to the `ar` command:
 - `r` stands for "replace" and tells `ar` to add or replace files in the archive.
  - `c` stands for "create" and tells `ar` to create the archive if it doesn't exist.

`libutil.a` is the name of the static library archive that will be created or updated.

`util_file.o` is the object file that will be added to the archive.

<h6> ALX SE </h6>
