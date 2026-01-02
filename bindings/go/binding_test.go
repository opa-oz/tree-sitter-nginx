package tree_sitter_nginx_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_nginx "github.com/opa-oz/tree-sitter-nginx/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nginx.Language())
	if language == nil {
		t.Errorf("Error loading nginx grammar")
	}
}
