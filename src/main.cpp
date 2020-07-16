#include "git2.h"

int main()
{
    git_libgit2_init();

    const char* path = "F:\\Personal\\git-ui";

    git_repository* repo;
    if (git_repository_open(&repo, path) != GIT_OK)
        return 1;

    git_repository_free(repo);

    git_libgit2_shutdown();

    return 0;
}
